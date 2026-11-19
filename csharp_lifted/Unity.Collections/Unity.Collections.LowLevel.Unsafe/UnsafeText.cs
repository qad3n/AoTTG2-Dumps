// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeText
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Jobs;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000148")]
[GenerateTestsForBurstCompatibility]
[DebuggerDisplay("Length = {Length}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
public struct UnsafeText : INativeDisposable, IDisposable, IUTF8Bytes, INativeList<byte>, IIndexable<byte>
{
	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x0")]
	internal UntypedUnsafeList m_UntypedListData;

	[Token(Token = "0x4000554")]
	public const int MaxCapacity = 2147483646;

	[Token(Token = "0x1700019F")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DBC")]
		[Address(RVA = "0x638E130", Offset = "0x638D130", VA = "0x638E130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A0")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DC1")]
		[Address(RVA = "0x638E200", Offset = "0x638D200", VA = "0x638E200", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A1")]
	public byte this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DC2")]
		[Address(RVA = "0x638E2C0", Offset = "0x638D2C0", VA = "0x638E2C0", Slot = "12")]
		get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x638E300", Offset = "0x638D300", VA = "0x638E300", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DC8")]
		[Address(RVA = "0x638E470", Offset = "0x638D470", VA = "0x638E470", Slot = "9")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC9")]
		[Address(RVA = "0x63800C0", Offset = "0x637F0C0", VA = "0x63800C0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x638E4D0", Offset = "0x638D4D0", VA = "0x638E4D0", Slot = "15")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x637FF60", Offset = "0x637EF60", VA = "0x637FF60", Slot = "16")]
		set
		{
		}
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x637F420", Offset = "0x637E420", VA = "0x637F420")]
	public UnsafeText(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x637F310", Offset = "0x637E310", VA = "0x637F310")]
	internal unsafe static UnsafeText* Alloc(AllocatorManager.AllocatorHandle allocator)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeText*)unchecked((nint)null);
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x63806D0", Offset = "0x637F6D0", VA = "0x63806D0")]
	internal unsafe static void Free(UnsafeText* data)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x637F2C0", Offset = "0x637E2C0", VA = "0x637F2C0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x638E190", Offset = "0x638D190", VA = "0x638E190", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x63802D0", Offset = "0x637F2D0", VA = "0x63802D0", Slot = "17")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x638E340", Offset = "0x638D340", VA = "0x638E340", Slot = "14")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x637F800", Offset = "0x637E800", VA = "0x637F800", Slot = "7")]
	public unsafe byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x638E3D0", Offset = "0x638D3D0", VA = "0x638E3D0", Slot = "8")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x63823F0", Offset = "0x63813F0", VA = "0x63823F0", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x638E530", Offset = "0x638D530", VA = "0x638E530")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x638E670", Offset = "0x638D670", VA = "0x638E670")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x638E700", Offset = "0x638D700", VA = "0x638E700")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCapacityInRange(int value, int length)
	{
	}
}
