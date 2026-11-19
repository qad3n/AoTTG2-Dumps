// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString64Bytes
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
			[Address(RVA = "0x6368F80", Offset = "0x6367F80", VA = "0x6368F80")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x1700008E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000440")]
			[Address(RVA = "0x6368F90", Offset = "0x6367F90", VA = "0x6368F90", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600043B")]
		[Address(RVA = "0x6366AD0", Offset = "0x6365AD0", VA = "0x6366AD0")]
		public Enumerator(FixedString64Bytes other)
		{
		}

		[Token(Token = "0x600043C")]
		[Address(RVA = "0x6368F20", Offset = "0x6367F20", VA = "0x6368F20")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x6368F30", Offset = "0x6367F30", VA = "0x6368F30", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600043E")]
		[Address(RVA = "0x6368F70", Offset = "0x6367F70", VA = "0x6368F70", Slot = "6")]
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
		[Address(RVA = "0x63668F0", Offset = "0x63658F0", VA = "0x63668F0")]
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
		[Address(RVA = "0x6366900", Offset = "0x6365900", VA = "0x6366900")]
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
		[Address(RVA = "0x6366990", Offset = "0x6365990", VA = "0x6366990", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x63669A0", Offset = "0x63659A0", VA = "0x63669A0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x63669B0", Offset = "0x63659B0", VA = "0x63669B0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x63669C0", Offset = "0x63659C0", VA = "0x63669C0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x6366A30", Offset = "0x6365A30", VA = "0x6366A30", Slot = "13")]
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
		[Address(RVA = "0x6366A40", Offset = "0x6365A40", VA = "0x6366A40", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x6366A50", Offset = "0x6365A50", VA = "0x6366A50", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x6366980", Offset = "0x6365980", VA = "0x6366980", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x63669D0", Offset = "0x63659D0", VA = "0x63669D0", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x6366A60", Offset = "0x6365A60", VA = "0x6366A60", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x6366A70", Offset = "0x6365A70", VA = "0x6366A70", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x6366A80", Offset = "0x6365A80", VA = "0x6366A80")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x6366AA0", Offset = "0x6365AA0", VA = "0x6366AA0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x6366B00", Offset = "0x6365B00", VA = "0x6366B00", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x6366B60", Offset = "0x6365B60", VA = "0x6366B60", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x6366BF0", Offset = "0x6365BF0", VA = "0x6366BF0")]
	public unsafe ref FixedList64Bytes<byte> AsFixedList()
	{
		return ref *(FixedList64Bytes<byte>*)null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x6366C20", Offset = "0x6365C20", VA = "0x6366C20")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString64Bytes(string source)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x6366C80", Offset = "0x6365C80", VA = "0x6366C80")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x6366CD0", Offset = "0x6365CD0", VA = "0x6366CD0")]
	public FixedString64Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x6366D40", Offset = "0x6365D40", VA = "0x6366D40")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x6366DA0", Offset = "0x6365DA0", VA = "0x6366DA0")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x6366E00", Offset = "0x6365E00", VA = "0x6366E00")]
	public FixedString64Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x6366EE0", Offset = "0x6365EE0", VA = "0x6366EE0")]
	public FixedString64Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x6366FD0", Offset = "0x6365FD0", VA = "0x6366FD0", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x6364ED0", Offset = "0x6363ED0", VA = "0x6364ED0")]
	public FixedString64Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x6367020", Offset = "0x6366020", VA = "0x6367020")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x63670C0", Offset = "0x63660C0", VA = "0x63670C0")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x6367160", Offset = "0x6366160", VA = "0x6367160")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x6367210", Offset = "0x6366210", VA = "0x6367210", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x63672C0", Offset = "0x63662C0", VA = "0x63672C0", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x6367310", Offset = "0x6366310", VA = "0x6367310")]
	public FixedString64Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x63673C0", Offset = "0x63663C0", VA = "0x63673C0")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x6367460", Offset = "0x6366460", VA = "0x6367460")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x63674E0", Offset = "0x63664E0", VA = "0x63674E0")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x6367560", Offset = "0x6366560", VA = "0x6367560", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x63675E0", Offset = "0x63665E0", VA = "0x63675E0", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x6367630", Offset = "0x6366630", VA = "0x6367630")]
	public FixedString64Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x63676E0", Offset = "0x63666E0", VA = "0x63676E0")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x6367780", Offset = "0x6366780", VA = "0x6367780")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x6367820", Offset = "0x6366820", VA = "0x6367820")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x63678D0", Offset = "0x63668D0", VA = "0x63678D0", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x6367980", Offset = "0x6366980", VA = "0x6367980")]
	public static implicit operator FixedString128Bytes(in FixedString64Bytes fs)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x6367B20", Offset = "0x6366B20", VA = "0x6367B20", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x6367B70", Offset = "0x6366B70", VA = "0x6367B70")]
	public FixedString64Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x6367C20", Offset = "0x6366C20", VA = "0x6367C20")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x6367CC0", Offset = "0x6366CC0", VA = "0x6367CC0")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x6367D60", Offset = "0x6366D60", VA = "0x6367D60")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x6367E10", Offset = "0x6366E10", VA = "0x6367E10", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x6367EC0", Offset = "0x6366EC0", VA = "0x6367EC0")]
	public static implicit operator FixedString512Bytes(in FixedString64Bytes fs)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x6368020", Offset = "0x6367020", VA = "0x6368020", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x6368070", Offset = "0x6367070", VA = "0x6368070")]
	public FixedString64Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x6368120", Offset = "0x6367120", VA = "0x6368120")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x63681C0", Offset = "0x63671C0", VA = "0x63681C0")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x6368260", Offset = "0x6367260", VA = "0x6368260")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x6368310", Offset = "0x6367310", VA = "0x6368310", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x63683C0", Offset = "0x63673C0", VA = "0x63683C0")]
	public static implicit operator FixedString4096Bytes(in FixedString64Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x6368520", Offset = "0x6367520", VA = "0x6368520")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString64Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x63686A0", Offset = "0x63676A0", VA = "0x63686A0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString64Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x6368640", Offset = "0x6367640", VA = "0x6368640")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString64Bytes(string b)
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x6366940", Offset = "0x6365940", VA = "0x6366940", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x63687A0", Offset = "0x63677A0", VA = "0x63687A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x63687E0", Offset = "0x63677E0", VA = "0x63687E0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000436")]
	[Address(RVA = "0x6368BD0", Offset = "0x6367BD0", VA = "0x6368BD0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x6368CC0", Offset = "0x6367CC0", VA = "0x6368CC0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x6368DA0", Offset = "0x6367DA0", VA = "0x6368DA0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x6368E40", Offset = "0x6367E40", VA = "0x6368E40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x6368ED0", Offset = "0x6367ED0", VA = "0x6368ED0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
