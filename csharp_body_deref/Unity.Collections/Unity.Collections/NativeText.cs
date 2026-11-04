// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeText
// Update status: NEW in this game update
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
			[Address(RVA = "0x29B36F0", Offset = "0x29B1CF0", VA = "0x1829B36F0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000118")]
		public Unicode.Rune Current
		{
			[Token(Token = "0x60009C3")]
			[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0", Slot = "4")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x29B3740", Offset = "0x29B1D40", VA = "0x1829B3740")]
		public Enumerator(NativeText source)
		{
		}

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x29B3740", Offset = "0x29B1D40", VA = "0x1829B3740")]
		public Enumerator(ReadOnly source)
		{
		}

		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x29B35F0", Offset = "0x29B1BF0", VA = "0x1829B35F0", Slot = "6")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x29B36E0", Offset = "0x29B1CE0", VA = "0x1829B36E0", Slot = "8")]
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
			[Address(RVA = "0x29B71A0", Offset = "0x29B57A0", VA = "0x1829B71A0", Slot = "4")]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60009C6")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
			set
			{
			}
		}

		[Token(Token = "0x1700011A")]
		public bool IsEmpty
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009C7")]
			[Address(RVA = "0x29B71F0", Offset = "0x29B57F0", VA = "0x1829B71F0", Slot = "13")]
			readonly get
			{
				return default(bool);
			}
			[Token(Token = "0x60009C8")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
			set
			{
			}
		}

		[Token(Token = "0x1700011B")]
		public int Length
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009C9")]
			[Address(RVA = "0x6CE700", Offset = "0x6CCD00", VA = "0x1806CE700", Slot = "10")]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60009CA")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
			set
			{
			}
		}

		[Token(Token = "0x1700011C")]
		public byte this[int index]
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009CB")]
			[Address(RVA = "0x29B7210", Offset = "0x29B5810", VA = "0x1829B7210", Slot = "7")]
			readonly get
			{
				return default(byte);
			}
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60009CC")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "8")]
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
			[Address(RVA = "0x29B86E0", Offset = "0x29B6CE0", VA = "0x1829B86E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		internal unsafe ReadOnly(UnsafeText* text)
		{
		}

		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x29B7F20", Offset = "0x29B6520", VA = "0x1829B7F20", Slot = "12")]
		public unsafe ref byte ElementAt(int index)
		{
			return ref *(byte*)null;
		}

		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x29B6960", Offset = "0x29B4F60", VA = "0x1829B6960", Slot = "14")]
		public unsafe byte* GetUnsafePtr()
		{
			//IL_0002: Expected I, but got O
			return (byte*)unchecked((nint)null);
		}

		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "15")]
		public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x29B7C20", Offset = "0x29B6220", VA = "0x1829B7C20")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		internal unsafe static void CheckNull(void* dataPtr)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		private readonly void CheckRead()
		{
		}

		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x29B8530", Offset = "0x29B6B30", VA = "0x1829B8530")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void ErrorWrite()
		{
		}

		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x29B7D70", Offset = "0x29B6370", VA = "0x1829B7D70", Slot = "16")]
		[ExcludeFromBurstCompatTesting("Takes managed string")]
		public int CompareTo(string other)
		{
			return default(int);
		}

		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x29B8410", Offset = "0x29B6A10", VA = "0x1829B8410", Slot = "17")]
		[ExcludeFromBurstCompatTesting("Takes managed string")]
		public bool Equals(string other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x29B7E50", Offset = "0x29B6450", VA = "0x1829B7E50")]
		public int CompareTo(ReadOnly other)
		{
			return default(int);
		}

		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x29B8450", Offset = "0x29B6A50", VA = "0x1829B8450")]
		public bool Equals(ReadOnly other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x29B7D20", Offset = "0x29B6320", VA = "0x1829B7D20", Slot = "18")]
		public int CompareTo(NativeText other)
		{
			return default(int);
		}

		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x29B84C0", Offset = "0x29B6AC0", VA = "0x1829B84C0", Slot = "19")]
		public bool Equals(NativeText other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x29B7DB0", Offset = "0x29B63B0", VA = "0x1829B7DB0", Slot = "20")]
		public int CompareTo(FixedString32Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x29B89D0", Offset = "0x29B6FD0", VA = "0x1829B89D0")]
		public static bool operator ==(in ReadOnly a, in FixedString32Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x29B8B70", Offset = "0x29B7170", VA = "0x1829B8B70")]
		public static bool operator !=(in ReadOnly a, in FixedString32Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x29B7F70", Offset = "0x29B6570", VA = "0x1829B7F70", Slot = "21")]
		public bool Equals(FixedString32Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x29B7C80", Offset = "0x29B6280", VA = "0x1829B7C80", Slot = "22")]
		public int CompareTo(FixedString64Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x29B8910", Offset = "0x29B6F10", VA = "0x1829B8910")]
		public static bool operator ==(in ReadOnly a, in FixedString64Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x29B8B90", Offset = "0x29B7190", VA = "0x1829B8B90")]
		public static bool operator !=(in ReadOnly a, in FixedString64Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x29B7F90", Offset = "0x29B6590", VA = "0x1829B7F90", Slot = "23")]
		public bool Equals(FixedString64Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x29B7CD0", Offset = "0x29B62D0", VA = "0x1829B7CD0", Slot = "24")]
		public int CompareTo(FixedString128Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x29B8850", Offset = "0x29B6E50", VA = "0x1829B8850")]
		public static bool operator ==(in ReadOnly a, in FixedString128Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x29B8B50", Offset = "0x29B7150", VA = "0x1829B8B50")]
		public static bool operator !=(in ReadOnly a, in FixedString128Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x29B7FB0", Offset = "0x29B65B0", VA = "0x1829B7FB0", Slot = "25")]
		public bool Equals(FixedString128Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x29B7E00", Offset = "0x29B6400", VA = "0x1829B7E00", Slot = "26")]
		public int CompareTo(FixedString512Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x29B8A90", Offset = "0x29B7090", VA = "0x1829B8A90")]
		public static bool operator ==(in ReadOnly a, in FixedString512Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x29B8BB0", Offset = "0x29B71B0", VA = "0x1829B8BB0")]
		public static bool operator !=(in ReadOnly a, in FixedString512Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x29B8510", Offset = "0x29B6B10", VA = "0x1829B8510", Slot = "27")]
		public bool Equals(FixedString512Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x29B7EA0", Offset = "0x29B64A0", VA = "0x1829B7EA0", Slot = "28")]
		public int CompareTo(FixedString4096Bytes other)
		{
			return default(int);
		}

		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x29B8790", Offset = "0x29B6D90", VA = "0x1829B8790")]
		public static bool operator ==(in ReadOnly a, in FixedString4096Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x29B8BD0", Offset = "0x29B71D0", VA = "0x1829B8BD0")]
		public static bool operator !=(in ReadOnly a, in FixedString4096Bytes b)
		{
			return default(bool);
		}

		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x29B84A0", Offset = "0x29B6AA0", VA = "0x1829B84A0", Slot = "29")]
		public bool Equals(FixedString4096Bytes other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009EE")]
		[Address(RVA = "0x29B86E0", Offset = "0x29B6CE0", VA = "0x1829B86E0", Slot = "3")]
		[ExcludeFromBurstCompatTesting("Returns managed string")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60009EF")]
		[Address(RVA = "0x29B8600", Offset = "0x29B6C00", VA = "0x1829B8600", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60009F0")]
		[Address(RVA = "0x29B7FD0", Offset = "0x29B65D0", VA = "0x1829B7FD0", Slot = "0")]
		[ExcludeFromBurstCompatTesting("Takes managed object")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x60009F2")]
		[Address(RVA = "0x29898B0", Offset = "0x2987EB0", VA = "0x1829898B0")]
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
		[Address(RVA = "0x6CE700", Offset = "0x6CCD00", VA = "0x1806CE700", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000989")]
		[Address(RVA = "0x29B77C0", Offset = "0x29B5DC0", VA = "0x1829B77C0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x29B71A0", Offset = "0x29B57A0", VA = "0x1829B71A0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600098B")]
		[Address(RVA = "0x29B7700", Offset = "0x29B5D00", VA = "0x1829B7700", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000113")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600098D")]
		[Address(RVA = "0x29B71F0", Offset = "0x29B57F0", VA = "0x1829B71F0", Slot = "15")]
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
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
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
		[Address(RVA = "0x29B7210", Offset = "0x29B5810", VA = "0x1829B7210", Slot = "7")]
		get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000991")]
		[Address(RVA = "0x29B7770", Offset = "0x29B5D70", VA = "0x1829B7770", Slot = "8")]
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
		[Address(RVA = "0x29B6A00", Offset = "0x29B5000", VA = "0x1829B6A00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x29B6DB0", Offset = "0x29B53B0", VA = "0x1829B6DB0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public NativeText(string source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x29B7000", Offset = "0x29B5600", VA = "0x1829B7000")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public NativeText(string source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x29B6AB0", Offset = "0x29B50B0", VA = "0x1829B6AB0")]
	public NativeText(int capacity, Allocator allocator)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x29B6DF0", Offset = "0x29B53F0", VA = "0x1829B6DF0")]
	public NativeText(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x29B6A80", Offset = "0x29B5080", VA = "0x1829B6A80")]
	public NativeText(Allocator allocator)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x29B6AF0", Offset = "0x29B50F0", VA = "0x1829B6AF0")]
	public NativeText(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x29B6B00", Offset = "0x29B5100", VA = "0x1829B6B00")]
	public NativeText(in FixedString32Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x29B6B90", Offset = "0x29B5190", VA = "0x1829B6B90")]
	public NativeText(in FixedString32Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x29B6EA0", Offset = "0x29B54A0", VA = "0x1829B6EA0")]
	public NativeText(in FixedString64Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x29B6CE0", Offset = "0x29B52E0", VA = "0x1829B6CE0")]
	public NativeText(in FixedString64Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x29B6BD0", Offset = "0x29B51D0", VA = "0x1829B6BD0")]
	public NativeText(in FixedString128Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x29B6F30", Offset = "0x29B5530", VA = "0x1829B6F30")]
	public NativeText(in FixedString128Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x29B6F70", Offset = "0x29B5570", VA = "0x1829B6F70")]
	public NativeText(in FixedString512Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x29B6C60", Offset = "0x29B5260", VA = "0x1829B6C60")]
	public NativeText(in FixedString512Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x29B6D20", Offset = "0x29B5320", VA = "0x1829B6D20")]
	public NativeText(in FixedString4096Bytes source, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x29B6CA0", Offset = "0x29B52A0", VA = "0x1829B6CA0")]
	public NativeText(in FixedString4096Bytes source, Allocator allocator)
	{
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x29B6A60", Offset = "0x29B5060", VA = "0x1829B6A60", Slot = "17")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x29B6960", Offset = "0x29B4F60", VA = "0x1829B6960", Slot = "16")]
	public unsafe byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000992")]
	[Address(RVA = "0x29B6300", Offset = "0x29B4900", VA = "0x1829B6300", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x29B5F10", Offset = "0x29B4510", VA = "0x1829B5F10", Slot = "9")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000994")]
	[Address(RVA = "0x29B5C90", Offset = "0x29B4290", VA = "0x1829B5C90")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x29B60E0", Offset = "0x29B46E0", VA = "0x1829B60E0", Slot = "20")]
	public int CompareTo(NativeText other)
	{
		return default(int);
	}

	[Token(Token = "0x6000996")]
	[Address(RVA = "0x29B6390", Offset = "0x29B4990", VA = "0x1829B6390", Slot = "21")]
	public bool Equals(NativeText other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000997")]
	[Address(RVA = "0x29B6180", Offset = "0x29B4780", VA = "0x1829B6180")]
	public int CompareTo(ReadOnly other)
	{
		return default(int);
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x29B6340", Offset = "0x29B4940", VA = "0x1829B6340")]
	public bool Equals(ReadOnly other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x29B6250", Offset = "0x29B4850", VA = "0x1829B6250", Slot = "14")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x29B61D0", Offset = "0x29B47D0", VA = "0x1829B61D0", Slot = "13")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x29898B0", Offset = "0x2987EB0", VA = "0x1829898B0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x29B5F20", Offset = "0x29B4520", VA = "0x1829B5F20", Slot = "18")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x29B6840", Offset = "0x29B4E40", VA = "0x1829B6840", Slot = "19")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x29B5FA0", Offset = "0x29B45A0", VA = "0x1829B5FA0", Slot = "22")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x29B7250", Offset = "0x29B5850", VA = "0x1829B7250")]
	public static bool operator ==(in NativeText a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x29B76A0", Offset = "0x29B5CA0", VA = "0x1829B76A0")]
	public static bool operator !=(in NativeText a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x29B68C0", Offset = "0x29B4EC0", VA = "0x1829B68C0", Slot = "23")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x29B6130", Offset = "0x29B4730", VA = "0x1829B6130", Slot = "24")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x29B74C0", Offset = "0x29B5AC0", VA = "0x1829B74C0")]
	public static bool operator ==(in NativeText a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x29B7660", Offset = "0x29B5C60", VA = "0x1829B7660")]
	public static bool operator !=(in NativeText a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x29B6900", Offset = "0x29B4F00", VA = "0x1829B6900", Slot = "25")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x29B6090", Offset = "0x29B4690", VA = "0x1829B6090", Slot = "26")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x29B73F0", Offset = "0x29B59F0", VA = "0x1829B73F0")]
	public static bool operator ==(in NativeText a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x29B76E0", Offset = "0x29B5CE0", VA = "0x1829B76E0")]
	public static bool operator !=(in NativeText a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x29B6820", Offset = "0x29B4E20", VA = "0x1829B6820", Slot = "27")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x29B5FF0", Offset = "0x29B45F0", VA = "0x1829B5FF0", Slot = "28")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x29B7590", Offset = "0x29B5B90", VA = "0x1829B7590")]
	public static bool operator ==(in NativeText a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x29B76C0", Offset = "0x29B5CC0", VA = "0x1829B76C0")]
	public static bool operator !=(in NativeText a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x29B68E0", Offset = "0x29B4EE0", VA = "0x1829B68E0", Slot = "29")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x29B6040", Offset = "0x29B4640", VA = "0x1829B6040", Slot = "30")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x29B7320", Offset = "0x29B5920", VA = "0x1829B7320")]
	public static bool operator ==(in NativeText a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B1")]
	[Address(RVA = "0x29B7680", Offset = "0x29B5C80", VA = "0x1829B7680")]
	public static bool operator !=(in NativeText a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B2")]
	[Address(RVA = "0x29B6800", Offset = "0x29B4E00", VA = "0x1829B6800", Slot = "31")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x29B6A00", Offset = "0x29B5000", VA = "0x1829B6A00", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x29B6920", Offset = "0x29B4F20", VA = "0x1829B6920", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x29B63E0", Offset = "0x29B49E0", VA = "0x1829B63E0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x29B5EB0", Offset = "0x29B44B0", VA = "0x1829B5EB0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal unsafe static void CheckNull(void* dataPtr)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckWriteAndBumpSecondaryVersion()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x29B5D30", Offset = "0x29B4330", VA = "0x1829B5D30")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x29B6970", Offset = "0x29B4F70", VA = "0x1829B6970")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
	public ReadOnly AsReadOnly()
	{
		return default(ReadOnly);
	}
}
