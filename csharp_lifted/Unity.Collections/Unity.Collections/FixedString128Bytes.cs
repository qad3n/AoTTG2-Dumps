// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString128Bytes
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
			[Address(RVA = "0x636B680", Offset = "0x636A680", VA = "0x636B680")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x17000096")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600048A")]
			[Address(RVA = "0x636B690", Offset = "0x636A690", VA = "0x636B690", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000485")]
		[Address(RVA = "0x63691E0", Offset = "0x63681E0", VA = "0x63691E0")]
		public Enumerator(FixedString128Bytes other)
		{
		}

		[Token(Token = "0x6000486")]
		[Address(RVA = "0x636B620", Offset = "0x636A620", VA = "0x636B620")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x636B630", Offset = "0x636A630", VA = "0x636B630", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000488")]
		[Address(RVA = "0x636B670", Offset = "0x636A670", VA = "0x636B670", Slot = "6")]
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
		[Address(RVA = "0x6368FE0", Offset = "0x6367FE0", VA = "0x6368FE0")]
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
		[Address(RVA = "0x6368FF0", Offset = "0x6367FF0", VA = "0x6368FF0")]
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
		[Address(RVA = "0x6369080", Offset = "0x6368080", VA = "0x6369080", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x6369090", Offset = "0x6368090", VA = "0x6369090", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x63690A0", Offset = "0x63680A0", VA = "0x63690A0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x63690B0", Offset = "0x63680B0", VA = "0x63690B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x6369120", Offset = "0x6368120", VA = "0x6369120", Slot = "13")]
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
		[Address(RVA = "0x6369130", Offset = "0x6368130", VA = "0x6369130", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x6369140", Offset = "0x6368140", VA = "0x6369140", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000443")]
	[Address(RVA = "0x6369070", Offset = "0x6368070", VA = "0x6369070", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x63690C0", Offset = "0x63680C0", VA = "0x63690C0", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x6369150", Offset = "0x6368150", VA = "0x6369150", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x6369160", Offset = "0x6368160", VA = "0x6369160", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x6369170", Offset = "0x6368170", VA = "0x6369170")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x6369190", Offset = "0x6368190", VA = "0x6369190")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x6369240", Offset = "0x6368240", VA = "0x6369240", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x63692A0", Offset = "0x63682A0", VA = "0x63692A0", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x6369330", Offset = "0x6368330", VA = "0x6369330")]
	public unsafe ref FixedList128Bytes<byte> AsFixedList()
	{
		return ref *(FixedList128Bytes<byte>*)null;
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x6369360", Offset = "0x6368360", VA = "0x6369360")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString128Bytes(string source)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x63693D0", Offset = "0x63683D0", VA = "0x63693D0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x6369420", Offset = "0x6368420", VA = "0x6369420")]
	public FixedString128Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x63694B0", Offset = "0x63684B0", VA = "0x63694B0")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x6369520", Offset = "0x6368520", VA = "0x6369520")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x6369590", Offset = "0x6368590", VA = "0x6369590")]
	public FixedString128Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x6369690", Offset = "0x6368690", VA = "0x6369690")]
	public FixedString128Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x63697A0", Offset = "0x63687A0", VA = "0x63697A0", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x63653E0", Offset = "0x63643E0", VA = "0x63653E0")]
	public FixedString128Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x63697F0", Offset = "0x63687F0", VA = "0x63697F0")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x63698A0", Offset = "0x63688A0", VA = "0x63698A0")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x6369940", Offset = "0x6368940", VA = "0x6369940")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x63699F0", Offset = "0x63689F0", VA = "0x63699F0", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x6369AA0", Offset = "0x6368AA0", VA = "0x6369AA0", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x6367A50", Offset = "0x6366A50", VA = "0x6367A50")]
	public FixedString128Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x6369AF0", Offset = "0x6368AF0", VA = "0x6369AF0")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x6369BA0", Offset = "0x6368BA0", VA = "0x6369BA0")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x6369C40", Offset = "0x6368C40", VA = "0x6369C40")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x6369CF0", Offset = "0x6368CF0", VA = "0x6369CF0", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x6369DA0", Offset = "0x6368DA0", VA = "0x6369DA0", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x6369DF0", Offset = "0x6368DF0", VA = "0x6369DF0")]
	public FixedString128Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x6369EC0", Offset = "0x6368EC0", VA = "0x6369EC0")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x6369F70", Offset = "0x6368F70", VA = "0x6369F70")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x6369FF0", Offset = "0x6368FF0", VA = "0x6369FF0")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x636A070", Offset = "0x6369070", VA = "0x636A070", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x636A0F0", Offset = "0x63690F0", VA = "0x636A0F0", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x636A140", Offset = "0x6369140", VA = "0x636A140")]
	public FixedString128Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x636A210", Offset = "0x6369210", VA = "0x636A210")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x636A2C0", Offset = "0x63692C0", VA = "0x636A2C0")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x636A360", Offset = "0x6369360", VA = "0x636A360")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x636A410", Offset = "0x6369410", VA = "0x636A410", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x636A4C0", Offset = "0x63694C0", VA = "0x636A4C0")]
	public static implicit operator FixedString512Bytes(in FixedString128Bytes fs)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x636A620", Offset = "0x6369620", VA = "0x636A620", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x636A670", Offset = "0x6369670", VA = "0x636A670")]
	public FixedString128Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x636A740", Offset = "0x6369740", VA = "0x636A740")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x636A7F0", Offset = "0x63697F0", VA = "0x636A7F0")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x636A890", Offset = "0x6369890", VA = "0x636A890")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x636A940", Offset = "0x6369940", VA = "0x636A940", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x636A9F0", Offset = "0x63699F0", VA = "0x636A9F0")]
	public static implicit operator FixedString4096Bytes(in FixedString128Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x636AB50", Offset = "0x6369B50", VA = "0x636AB50")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString128Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x636AD40", Offset = "0x6369D40", VA = "0x636AD40")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString128Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x636ACD0", Offset = "0x6369CD0", VA = "0x636ACD0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString128Bytes(string b)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x6369030", Offset = "0x6368030", VA = "0x6369030", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x636AE90", Offset = "0x6369E90", VA = "0x636AE90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x636AED0", Offset = "0x6369ED0", VA = "0x636AED0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000480")]
	[Address(RVA = "0x636B2D0", Offset = "0x636A2D0", VA = "0x636B2D0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x636B3C0", Offset = "0x636A3C0", VA = "0x636B3C0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x636B4A0", Offset = "0x636A4A0", VA = "0x636B4A0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x636B540", Offset = "0x636A540", VA = "0x636B540")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x636B5D0", Offset = "0x636A5D0", VA = "0x636B5D0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
