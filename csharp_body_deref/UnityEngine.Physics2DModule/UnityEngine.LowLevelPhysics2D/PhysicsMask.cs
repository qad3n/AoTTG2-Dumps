// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsMask
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.LowLevelPhysics2D;

[Serializable]
[Token(Token = "0x200001A")]
public struct PhysicsMask : IEnumerable<int>, IEnumerable
{
	[Token(Token = "0x200001B")]
	public struct SetBitIterator : IEnumerable<int>, IEnumerable, IEnumerator<int>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40000C8")]
		[FieldOffset(Offset = "0x0")]
		private int m_BitIndex;

		[Token(Token = "0x40000C9")]
		[FieldOffset(Offset = "0x8")]
		private ulong bitMask;

		[Token(Token = "0x17000025")]
		private readonly int System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EInt32_003E_002ECurrent
		{
			[Token(Token = "0x60000E0")]
			[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000026")]
		private readonly object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000E1")]
			[Address(RVA = "0x2FDADA0", Offset = "0x2FD93A0", VA = "0x182FDADA0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x2FDADC0", Offset = "0x2FD93C0", VA = "0x182FDADC0")]
		public SetBitIterator(PhysicsMask bitMask)
		{
		}

		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x2FDAD50", Offset = "0x2FD9350", VA = "0x182FDAD50", Slot = "8")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x2FDAD90", Offset = "0x2FD9390", VA = "0x182FDAD90", Slot = "10")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x2FDAD00", Offset = "0x2FD9300", VA = "0x182FDAD00", Slot = "4")]
		public IEnumerator<int> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x2FDAD00", Offset = "0x2FD9300", VA = "0x182FDAD00", Slot = "5")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		private readonly void System_002EIDisposable_002EDispose()
		{
		}
	}

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x0")]
	public ulong bitMask;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PhysicsMask None;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x8")]
	public static readonly PhysicsMask One;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x10")]
	public static readonly PhysicsMask All;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0")]
	public static implicit operator ulong(PhysicsMask bitMask)
	{
		return default(ulong);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x2FD4B90", Offset = "0x2FD3190", VA = "0x182FD4B90", Slot = "4")]
	public readonly IEnumerator<int> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x2FD4C20", Offset = "0x2FD3220", VA = "0x182FD4C20", Slot = "5")]
	private readonly IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x2FD4CB0", Offset = "0x2FD32B0", VA = "0x182FD4CB0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
