// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString4096Bytes
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
			[Address(RVA = "0x636F910", Offset = "0x636E910", VA = "0x636F910")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x170000A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600051B")]
			[Address(RVA = "0x636F920", Offset = "0x636E920", VA = "0x636F920", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000516")]
		[Address(RVA = "0x636DB00", Offset = "0x636CB00", VA = "0x636DB00")]
		public Enumerator(FixedString4096Bytes other)
		{
		}

		[Token(Token = "0x6000517")]
		[Address(RVA = "0x636F8B0", Offset = "0x636E8B0", VA = "0x636F8B0")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000518")]
		[Address(RVA = "0x636F8C0", Offset = "0x636E8C0", VA = "0x636F8C0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000519")]
		[Address(RVA = "0x636F900", Offset = "0x636E900", VA = "0x636F900", Slot = "6")]
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
		[Address(RVA = "0x636D930", Offset = "0x636C930", VA = "0x636D930")]
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
		[Address(RVA = "0x636D940", Offset = "0x636C940", VA = "0x636D940")]
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
		[Address(RVA = "0x636D9D0", Offset = "0x636C9D0", VA = "0x636D9D0", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x636D9E0", Offset = "0x636C9E0", VA = "0x636D9E0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x636D9F0", Offset = "0x636C9F0", VA = "0x636D9F0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x636DA00", Offset = "0x636CA00", VA = "0x636DA00", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x636DA70", Offset = "0x636CA70", VA = "0x636DA70", Slot = "13")]
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
		[Address(RVA = "0x636DA80", Offset = "0x636CA80", VA = "0x636DA80", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x636DA90", Offset = "0x636CA90", VA = "0x636DA90", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x636D9C0", Offset = "0x636C9C0", VA = "0x636D9C0", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x636DA10", Offset = "0x636CA10", VA = "0x636DA10", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x636DAA0", Offset = "0x636CAA0", VA = "0x636DAA0", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x636DAB0", Offset = "0x636CAB0", VA = "0x636DAB0", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x636DAC0", Offset = "0x636CAC0", VA = "0x636DAC0")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x636DAE0", Offset = "0x636CAE0", VA = "0x636DAE0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x636DB20", Offset = "0x636CB20", VA = "0x636DB20", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x636DB80", Offset = "0x636CB80", VA = "0x636DB80", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x636DC10", Offset = "0x636CC10", VA = "0x636DC10")]
	public unsafe ref FixedList4096Bytes<byte> AsFixedList()
	{
		return ref *(FixedList4096Bytes<byte>*)null;
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x636DC40", Offset = "0x636CC40", VA = "0x636DC40")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString4096Bytes(string source)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x636DC90", Offset = "0x636CC90", VA = "0x636DC90")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x636DCE0", Offset = "0x636CCE0", VA = "0x636DCE0")]
	public FixedString4096Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x636DD40", Offset = "0x636CD40", VA = "0x636DD40")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x636DDA0", Offset = "0x636CDA0", VA = "0x636DDA0")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x636DE10", Offset = "0x636CE10", VA = "0x636DE10")]
	public FixedString4096Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x636DEF0", Offset = "0x636CEF0", VA = "0x636DEF0")]
	public FixedString4096Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x636DFE0", Offset = "0x636CFE0", VA = "0x636DFE0", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x6365DE0", Offset = "0x6364DE0", VA = "0x6365DE0")]
	public FixedString4096Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x636E030", Offset = "0x636D030", VA = "0x636E030")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x636E0D0", Offset = "0x636D0D0", VA = "0x636E0D0")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x636E170", Offset = "0x636D170", VA = "0x636E170")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x636E220", Offset = "0x636D220", VA = "0x636E220", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x636E2D0", Offset = "0x636D2D0", VA = "0x636E2D0", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x6368470", Offset = "0x6367470", VA = "0x6368470")]
	public FixedString4096Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x636E320", Offset = "0x636D320", VA = "0x636E320")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x636E3C0", Offset = "0x636D3C0", VA = "0x636E3C0")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x636E460", Offset = "0x636D460", VA = "0x636E460")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x636E510", Offset = "0x636D510", VA = "0x636E510", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x636E5C0", Offset = "0x636D5C0", VA = "0x636E5C0", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x636AAA0", Offset = "0x6369AA0", VA = "0x636AAA0")]
	public FixedString4096Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x636E610", Offset = "0x636D610", VA = "0x636E610")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x636E6B0", Offset = "0x636D6B0", VA = "0x636E6B0")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x636E750", Offset = "0x636D750", VA = "0x636E750")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x636E800", Offset = "0x636D800", VA = "0x636E800", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x636E8B0", Offset = "0x636D8B0", VA = "0x636E8B0", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x636CDD0", Offset = "0x636BDD0", VA = "0x636CDD0")]
	public FixedString4096Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x636E900", Offset = "0x636D900", VA = "0x636E900")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x636E9A0", Offset = "0x636D9A0", VA = "0x636E9A0")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x636EA40", Offset = "0x636DA40", VA = "0x636EA40")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x636EAF0", Offset = "0x636DAF0", VA = "0x636EAF0", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x636EBA0", Offset = "0x636DBA0", VA = "0x636EBA0", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x636EBF0", Offset = "0x636DBF0", VA = "0x636EBF0")]
	public FixedString4096Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x636ECA0", Offset = "0x636DCA0", VA = "0x636ECA0")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x636ED40", Offset = "0x636DD40", VA = "0x636ED40")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x636EDC0", Offset = "0x636DDC0", VA = "0x636EDC0")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x636EE40", Offset = "0x636DE40", VA = "0x636EE40", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x636EEC0", Offset = "0x636DEC0", VA = "0x636EEC0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString4096Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x636F030", Offset = "0x636E030", VA = "0x636F030")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString4096Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x636EFD0", Offset = "0x636DFD0", VA = "0x636EFD0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString4096Bytes(string b)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x636D980", Offset = "0x636C980", VA = "0x636D980", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x636F120", Offset = "0x636E120", VA = "0x636F120", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x636F160", Offset = "0x636E160", VA = "0x636F160", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x636F560", Offset = "0x636E560", VA = "0x636F560")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x636F650", Offset = "0x636E650", VA = "0x636F650")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x636F730", Offset = "0x636E730", VA = "0x636F730")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x636F7D0", Offset = "0x636E7D0", VA = "0x636F7D0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x636F860", Offset = "0x636E860", VA = "0x636F860")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
