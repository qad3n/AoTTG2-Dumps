// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeText
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using Unity.Properties;

namespace Unity.Collections;

[Token(Token = "0x20000D0")]
[NativeContainer]
[DebuggerDisplay("Length = {Length}")]
[GenerateTestsForBurstCompatibility]
public struct NativeText : INativeList<byte>, IIndexable<byte>, INativeDisposable, IDisposable, IUTF8Bytes, IComparable<string>, IEquatable<string>, IComparable<NativeText>, IEquatable<NativeText>, IComparable<FixedString32Bytes>, IEquatable<FixedString32Bytes>, IComparable<FixedString64Bytes>, IEquatable<FixedString64Bytes>, IComparable<FixedString128Bytes>, IEquatable<FixedString128Bytes>, IComparable<FixedString512Bytes>, IEquatable<FixedString512Bytes>, IComparable<FixedString4096Bytes>, IEquatable<FixedString4096Bytes>
{
	[Token(Token = "0x20000D1")]
	public struct Enumerator : IEnumerator<Unicode.Rune>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000411")]
		[FieldOffset(Offset = "0x0")]
		private ReadOnly target;

		[Token(Token = "0x4000412")]
		[FieldOffset(Offset = "0x8")]
		private int offset;

		[Token(Token = "0x4000413")]
		[FieldOffset(Offset = "0xC")]
		private Unicode.Rune current;

		[Token(Token = "0x17000117")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009C2")]
			[Address(RVA = "0x6381F80", Offset = "0x6380F80", VA = "0x6381F80", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000118")]
		public Unicode.Rune Current
		{
			[Token(Token = "0x60009C3")]
			[Address(RVA = "0x6381FD0", Offset = "0x6380FD0", VA = "0x6381FD0", Slot = "4")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x63808E0", Offset = "0x637F8E0", VA = "0x63808E0")]
		public Enumerator(NativeText source)
		{
		}

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x6381C80", Offset = "0x6380C80", VA = "0x6381C80")]
		public Enumerator(ReadOnly source)
		{
		}

		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x6381C90", Offset = "0x6380C90", VA = "0x6381C90", Slot = "5")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x6381CA0", Offset = "0x6380CA0", VA = "0x6381CA0", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x6381F70", Offset = "0x6380F70", VA = "0x6381F70", Slot = "8")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20000D2")]
	[NativeContainer]
	[NativeContainerIsReadOnly]
	public struct ReadOnly : INativeList<byte>, IIndexable<byte>, IUTF8Bytes, IComparable<string>, IEquatable<string>, IComparable<NativeText>, IEquatable<NativeText>, IComparable<FixedString32Bytes>, IEquatable<FixedString32Bytes>, IComparable<FixedString64Bytes>, IEquatable<FixedString64Bytes>, IComparable<FixedString128Bytes>, IEquatable<FixedString128Bytes>, IComparable<FixedString512Bytes>, IEquatable<FixedString512Bytes>, IComparable<FixedString4096Bytes>, IEquatable<FixedString4096Bytes>
	{
		[Token(Token = "0x4000414")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		internal unsafe UnsafeText* m_Data;

		[Token(Token = "0x17000119")]
		public int Capacity
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009C5")]
			[Address(RVA = "0x6381FF0", Offset = "0x6380FF0", VA = "0x6381FF0", Slot = "4")]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60009C6")]
			[Address(RVA = "0x6382050", Offset = "0x6381050", VA = "0x6382050", Slot = "5")]
			set
			{
			}
		}

		[Token(Token = "0x1700011A")]
		public bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009C7")]
			[Address(RVA = "0x6382060", Offset = "0x6381060", VA = "0x6382060", Slot = "13")]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x60009C8")]
			[Address(RVA = "0x6382120", Offset = "0x6381120", VA = "0x6382120")]
			set
			{
			}
		}

		[Token(Token = "0x1700011B")]
		public int Length
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009C9")]
			[Address(RVA = "0x6382130", Offset = "0x6381130", VA = "0x6382130", Slot = "10")]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60009CA")]
			[Address(RVA = "0x6382190", Offset = "0x6381190", VA = "0x6382190", Slot = "11")]
			set
			{
			}
		}

		[Token(Token = "0x1700011C")]
		public byte this[int index]
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009CB")]
			[Address(RVA = "0x63821A0", Offset = "0x63811A0", VA = "0x63821A0", Slot = "7")]
			readonly get
			{
				return default(byte);
			}
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009CC")]
			[Address(RVA = "0x63821E0", Offset = "0x63811E0", VA = "0x63821E0", Slot = "8")]
			set
			{
			}
		}

		[Token(Token = "0x1700011D")]
		[CreateProperty]
		[EditorBrowsable(EditorBrowsableState.Never)]
		[ExcludeFromBurstCompatTesting("Returns managed string")]
		public string Value
		{
			[Token(Token = "0x60009F1")]
			[Address(RVA = "0x63834B0", Offset = "0x63824B0", VA = "0x63834B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x6381FE0", Offset = "0x6380FE0", VA = "0x6381FE0")]
		internal unsafe ReadOnly(UnsafeText* text)
		{
		}

		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x63821F0", Offset = "0x63811F0", VA = "0x63821F0", Slot = "9")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x6382200", Offset = "0x6381200", VA = "0x6382200", Slot = "12")]
		public unsafe ref byte ElementAt(int index)
		{
			return ref *(byte*)null;
		}

		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x6381D90", Offset = "0x6380D90", VA = "0x6381D90", Slot = "14")]
		public unsafe byte* GetUnsafePtr()
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x6382250", Offset = "0x6381250", VA = "0x6382250", Slot = "15")]
		public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x6382260", Offset = "0x6381260", VA = "0x6382260")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		internal unsafe static void CheckNull(void* dataPtr)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x63822B0", Offset = "0x63812B0", VA = "0x63822B0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}

		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x63822C0", Offset = "0x63812C0", VA = "0x63822C0")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void ErrorWrite()
		{
		}

		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x6382310", Offset = "0x6381310", VA = "0x6382310", Slot = "16")]
		[ExcludeFromBurstCompatTesting("Takes managed string")]
		public int CompareTo(string other)
		{
			return default(int);
		}

		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x63824B0", Offset = "0x63814B0", VA = "0x63824B0", Slot = "17")]
		[ExcludeFromBurstCompatTesting("Takes managed string")]
		public bool Equals(string other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x6382590", Offset = "0x6381590", VA = "0x6382590")]
		public int CompareTo(ReadOnly other)
		{
			return default(int);
		}

		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x63825E0", Offset = "0x63815E0", VA = "0x63825E0")]
		public bool Equals(ReadOnly other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x6382630", Offset = "0x6381630", VA = "0x6382630", Slot = "18")]
		public int CompareTo(NativeText other)
		{
			return default(int);
		}

		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x6382680", Offset = "0x6381680", VA = "0x6382680", Slot = "19")]
		public bool Equals(NativeText other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x63826D0", Offset = "0x63816D0", VA = "0x63826D0", Slot = "20")]
		public int CompareTo(FixedString32Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x6382720", Offset = "0x6381720", VA = "0x6382720")]
		public static bool operator ==(in ReadOnly a, in FixedString32Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x63828A0", Offset = "0x63818A0", VA = "0x63828A0")]
		public static bool operator !=(in ReadOnly a, in FixedString32Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x63828B0", Offset = "0x63818B0", VA = "0x63828B0", Slot = "21")]
		public bool Equals(FixedString32Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x63828C0", Offset = "0x63818C0", VA = "0x63828C0", Slot = "22")]
		public int CompareTo(FixedString64Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x6382910", Offset = "0x6381910", VA = "0x6382910")]
		public static bool operator ==(in ReadOnly a, in FixedString64Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x6382A90", Offset = "0x6381A90", VA = "0x6382A90")]
		public static bool operator !=(in ReadOnly a, in FixedString64Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x6382AA0", Offset = "0x6381AA0", VA = "0x6382AA0", Slot = "23")]
		public bool Equals(FixedString64Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x6382AB0", Offset = "0x6381AB0", VA = "0x6382AB0", Slot = "24")]
		public int CompareTo(FixedString128Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x6382B00", Offset = "0x6381B00", VA = "0x6382B00")]
		public static bool operator ==(in ReadOnly a, in FixedString128Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x6382C80", Offset = "0x6381C80", VA = "0x6382C80")]
		public static bool operator !=(in ReadOnly a, in FixedString128Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x6382C90", Offset = "0x6381C90", VA = "0x6382C90", Slot = "25")]
		public bool Equals(FixedString128Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x6382CA0", Offset = "0x6381CA0", VA = "0x6382CA0", Slot = "26")]
		public int CompareTo(FixedString512Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x6382CF0", Offset = "0x6381CF0", VA = "0x6382CF0")]
		public static bool operator ==(in ReadOnly a, in FixedString512Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x6382E70", Offset = "0x6381E70", VA = "0x6382E70")]
		public static bool operator !=(in ReadOnly a, in FixedString512Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x6382E80", Offset = "0x6381E80", VA = "0x6382E80", Slot = "27")]
		public bool Equals(FixedString512Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x6382E90", Offset = "0x6381E90", VA = "0x6382E90", Slot = "28")]
		public int CompareTo(FixedString4096Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x6382EE0", Offset = "0x6381EE0", VA = "0x6382EE0")]
		public static bool operator ==(in ReadOnly a, in FixedString4096Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x6383060", Offset = "0x6382060", VA = "0x6383060")]
		public static bool operator !=(in ReadOnly a, in FixedString4096Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x6383070", Offset = "0x6382070", VA = "0x6383070", Slot = "29")]
		public bool Equals(FixedString4096Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x6383080", Offset = "0x6382080", VA = "0x6383080", Slot = "3")]
		[ExcludeFromBurstCompatTesting("Returns managed string")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x63830E0", Offset = "0x63820E0", VA = "0x63830E0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x6383120", Offset = "0x6382120", VA = "0x6383120", Slot = "0")]
		[ExcludeFromBurstCompatTesting("Takes managed object")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x6383510", Offset = "0x6382510", VA = "0x6383510")]
		public Enumerator GetEnumerator()
		{
			return default(Enumerator);
		}
	}

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe UnsafeText* m_Data;

	[Token(Token = "0x4000410")]
	public const int MaxCapacity = 2147483646;

	[Token(Token = "0x17000111")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000988")]
		[Address(RVA = "0x637FF00", Offset = "0x637EF00", VA = "0x637FF00", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000989")]
		[Address(RVA = "0x637F150", Offset = "0x637E150", VA = "0x637F150", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x6380000", Offset = "0x637F000", VA = "0x6380000", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600098B")]
		[Address(RVA = "0x6380060", Offset = "0x637F060", VA = "0x6380060", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600098D")]
		[Address(RVA = "0x63801C0", Offset = "0x637F1C0", VA = "0x63801C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000114")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600098E")]
		[Address(RVA = "0x6380280", Offset = "0x637F280", VA = "0x6380280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000115")]
	public byte this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000990")]
		[Address(RVA = "0x6380290", Offset = "0x637F290", VA = "0x6380290", Slot = "7")]
		get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000991")]
		[Address(RVA = "0x6380310", Offset = "0x637F310", VA = "0x6380310", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000116")]
	[CreateProperty]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public string Value
	{
		[Token(Token = "0x600099B")]
		[Address(RVA = "0x6380810", Offset = "0x637F810", VA = "0x6380810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x637ED00", Offset = "0x637DD00", VA = "0x637ED00")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public NativeText(string source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x637ED30", Offset = "0x637DD30", VA = "0x637ED30")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public NativeText(string source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x637F370", Offset = "0x637E370", VA = "0x637F370")]
	public NativeText(int capacity, Allocator allocator)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x637F0B0", Offset = "0x637E0B0", VA = "0x637F0B0")]
	public NativeText(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x637F540", Offset = "0x637E540", VA = "0x637F540")]
	public NativeText(Allocator allocator)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x637F5E0", Offset = "0x637E5E0", VA = "0x637F5E0")]
	public NativeText(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x637F680", Offset = "0x637E680", VA = "0x637F680")]
	public NativeText(in FixedString32Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x637F810", Offset = "0x637E810", VA = "0x637F810")]
	public NativeText(in FixedString32Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x637F840", Offset = "0x637E840", VA = "0x637F840")]
	public NativeText(in FixedString64Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x637F9C0", Offset = "0x637E9C0", VA = "0x637F9C0")]
	public NativeText(in FixedString64Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x637F9F0", Offset = "0x637E9F0", VA = "0x637F9F0")]
	public NativeText(in FixedString128Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x637FB70", Offset = "0x637EB70", VA = "0x637FB70")]
	public NativeText(in FixedString128Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x637FBA0", Offset = "0x637EBA0", VA = "0x637FBA0")]
	public NativeText(in FixedString512Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x637FD20", Offset = "0x637ED20", VA = "0x637FD20")]
	public NativeText(in FixedString512Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x637FD50", Offset = "0x637ED50", VA = "0x637FD50")]
	public NativeText(in FixedString4096Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x637FED0", Offset = "0x637EED0", VA = "0x637FED0")]
	public NativeText(in FixedString4096Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x6380120", Offset = "0x637F120", VA = "0x6380120", Slot = "17")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x637F1F0", Offset = "0x637E1F0", VA = "0x637F1F0", Slot = "16")]
	public unsafe byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000992")]
	[Address(RVA = "0x6380350", Offset = "0x637F350", VA = "0x6380350", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x6380390", Offset = "0x637F390", VA = "0x6380390", Slot = "9")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000994")]
	[Address(RVA = "0x6380420", Offset = "0x637F420", VA = "0x6380420")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x6380570", Offset = "0x637F570", VA = "0x6380570", Slot = "20")]
	public int CompareTo(NativeText other)
	{
		return default(int);
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x63805C0", Offset = "0x637F5C0", VA = "0x63805C0", Slot = "21")]
	public bool Equals(NativeText other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x6380610", Offset = "0x637F610", VA = "0x6380610")]
	public int CompareTo(ReadOnly other)
	{
		return default(int);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x6380660", Offset = "0x637F660", VA = "0x6380660")]
	public bool Equals(ReadOnly other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x63806B0", Offset = "0x637F6B0", VA = "0x63806B0", Slot = "14")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x63807B0", Offset = "0x637F7B0", VA = "0x63807B0", Slot = "13")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x63808D0", Offset = "0x637F8D0", VA = "0x63808D0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x63808F0", Offset = "0x637F8F0", VA = "0x63808F0", Slot = "18")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x6380970", Offset = "0x637F970", VA = "0x6380970", Slot = "19")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x63809F0", Offset = "0x637F9F0", VA = "0x63809F0", Slot = "22")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x6380A40", Offset = "0x637FA40", VA = "0x6380A40")]
	public static bool operator ==(in NativeText a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x6380CE0", Offset = "0x637FCE0", VA = "0x6380CE0")]
	public static bool operator !=(in NativeText a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x6380CF0", Offset = "0x637FCF0", VA = "0x6380CF0", Slot = "23")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x6380D00", Offset = "0x637FD00", VA = "0x6380D00", Slot = "24")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x6380D50", Offset = "0x637FD50", VA = "0x6380D50")]
	public static bool operator ==(in NativeText a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x6380F20", Offset = "0x637FF20", VA = "0x6380F20")]
	public static bool operator !=(in NativeText a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x6380F30", Offset = "0x637FF30", VA = "0x6380F30", Slot = "25")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x6380F40", Offset = "0x637FF40", VA = "0x6380F40", Slot = "26")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x6380F90", Offset = "0x637FF90", VA = "0x6380F90")]
	public static bool operator ==(in NativeText a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x6381160", Offset = "0x6380160", VA = "0x6381160")]
	public static bool operator !=(in NativeText a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x6381170", Offset = "0x6380170", VA = "0x6381170", Slot = "27")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x6381180", Offset = "0x6380180", VA = "0x6381180", Slot = "28")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x63811D0", Offset = "0x63801D0", VA = "0x63811D0")]
	public static bool operator ==(in NativeText a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x63813A0", Offset = "0x63803A0", VA = "0x63813A0")]
	public static bool operator !=(in NativeText a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x63813B0", Offset = "0x63803B0", VA = "0x63813B0", Slot = "29")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x63813C0", Offset = "0x63803C0", VA = "0x63813C0", Slot = "30")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x6381410", Offset = "0x6380410", VA = "0x6381410")]
	public static bool operator ==(in NativeText a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x63815E0", Offset = "0x63805E0", VA = "0x63815E0")]
	public static bool operator !=(in NativeText a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x63815F0", Offset = "0x63805F0", VA = "0x63815F0", Slot = "31")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x6380870", Offset = "0x637F870", VA = "0x6380870", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x6381600", Offset = "0x6380600", VA = "0x6381600", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x6381640", Offset = "0x6380640", VA = "0x6381640", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x6381A20", Offset = "0x6380A20", VA = "0x6381A20")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal unsafe static void CheckNull(void* dataPtr)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x6381A70", Offset = "0x6380A70", VA = "0x6381A70")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x6381A80", Offset = "0x6380A80", VA = "0x6381A80")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x6381A90", Offset = "0x6380A90", VA = "0x6381A90")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckWriteAndBumpSecondaryVersion()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x6381AA0", Offset = "0x6380AA0", VA = "0x6381AA0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x6381BE0", Offset = "0x6380BE0", VA = "0x6381BE0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x6381C70", Offset = "0x6380C70", VA = "0x6381C70")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
