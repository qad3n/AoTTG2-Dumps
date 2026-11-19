// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevelPhysics2D.PhysicsMask
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x69CC8D0", Offset = "0x69CB8D0", VA = "0x69CC8D0", Slot = "6")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000026")]
		private readonly object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60000E1")]
			[Address(RVA = "0x69CC8E0", Offset = "0x69CB8E0", VA = "0x69CC8E0", Slot = "9")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x69CC710", Offset = "0x69CB710", VA = "0x69CC710")]
		public SetBitIterator(PhysicsMask bitMask)
		{
		}

		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x69CC900", Offset = "0x69CB900", VA = "0x69CC900", Slot = "8")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x69CC930", Offset = "0x69CB930", VA = "0x69CC930", Slot = "10")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x69CC940", Offset = "0x69CB940", VA = "0x69CC940", Slot = "4")]
		public IEnumerator<int> GetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x69CC990", Offset = "0x69CB990", VA = "0x69CC990", Slot = "5")]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x69CC9E0", Offset = "0x69CB9E0", VA = "0x69CC9E0", Slot = "7")]
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
	[Address(RVA = "0x69CC650", Offset = "0x69CB650", VA = "0x69CC650")]
	public static implicit operator ulong(PhysicsMask bitMask)
	{
		return default(ulong);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x69CC660", Offset = "0x69CB660", VA = "0x69CC660", Slot = "4")]
	public readonly IEnumerator<int> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x69CC760", Offset = "0x69CB760", VA = "0x69CC760", Slot = "5")]
	private readonly IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x69CC810", Offset = "0x69CB810", VA = "0x69CC810", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}
}
