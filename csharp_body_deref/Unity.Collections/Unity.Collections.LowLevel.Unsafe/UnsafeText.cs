// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.UnsafeText
// Update status: NEW in this game update
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
		[Address(RVA = "0x29C0E00", Offset = "0x29BF400", VA = "0x1829C0E00")]
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
		[Address(RVA = "0x29B2B00", Offset = "0x29B1100", VA = "0x1829B2B00", Slot = "11")]
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
		[Address(RVA = "0x29C0E50", Offset = "0x29BF450", VA = "0x1829C0E50", Slot = "12")]
		get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DC3")]
		[Address(RVA = "0x29C0F50", Offset = "0x29BF550", VA = "0x1829C0F50", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x170001A2")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DC8")]
		[Address(RVA = "0x29C0DB0", Offset = "0x29BF3B0", VA = "0x1829C0DB0", Slot = "9")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000DC9")]
		[Address(RVA = "0x29C0EE0", Offset = "0x29BF4E0", VA = "0x1829C0EE0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000DCA")]
		[Address(RVA = "0x29C0E90", Offset = "0x29BF490", VA = "0x1829C0E90", Slot = "15")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000DCB")]
		[Address(RVA = "0x29C0FA0", Offset = "0x29BF5A0", VA = "0x1829C0FA0", Slot = "16")]
		set
		{
		}
	}

	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x29C0CF0", Offset = "0x29BF2F0", VA = "0x1829C0CF0")]
	public UnsafeText(int capacity, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x29C05E0", Offset = "0x29BEBE0", VA = "0x1829C05E0")]
	internal unsafe static UnsafeText* Alloc(AllocatorManager.AllocatorHandle allocator)
	{
		//IL_0002: Expected I, but got O
		return (UnsafeText*)unchecked((nint)null);
	}

	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x29C0A30", Offset = "0x29BF030", VA = "0x1829C0A30")]
	internal unsafe static void Free(UnsafeText* data)
	{
	}

	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x29C0900", Offset = "0x29BEF00", VA = "0x1829C0900", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x29C0960", Offset = "0x29BEF60", VA = "0x1829C0960", Slot = "4")]
	public JobHandle Dispose(JobHandle inputDeps)
	{
		return default(JobHandle);
	}

	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x29C09F0", Offset = "0x29BEFF0", VA = "0x1829C09F0", Slot = "17")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x29C08F0", Offset = "0x29BEEF0", VA = "0x1829C08F0", Slot = "14")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0", Slot = "7")]
	public unsafe byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x29C0C40", Offset = "0x29BF240", VA = "0x1829C0C40", Slot = "8")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x29C0BA0", Offset = "0x29BF1A0", VA = "0x1829C0BA0", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x29C0770", Offset = "0x29BED70", VA = "0x1829C0770")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x29C0B10", Offset = "0x29BF110", VA = "0x1829C0B10")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void ThrowCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x29C0640", Offset = "0x29BEC40", VA = "0x1829C0640")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCapacityInRange(int value, int length)
	{
	}
}
