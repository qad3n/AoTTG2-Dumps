// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Hash128
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x200012E")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/Hash128.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Hashing/Hash128.bindings.h")]
public struct Hash128 : IComparable, IComparable<Hash128>, IEquatable<Hash128>
{
	[Token(Token = "0x40003B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal ulong u64_0;

	[Token(Token = "0x40003B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal ulong u64_1;

	[Token(Token = "0x40003B6")]
	private const ulong kConst = 16045690984833335023uL;

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0xB546F0", Offset = "0xB52CF0", VA = "0x180B546F0")]
	public Hash128(ulong u64_0, ulong u64_1)
	{
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x2EDADE0", Offset = "0x2ED93E0", VA = "0x182EDADE0", Slot = "5")]
	public int CompareTo(Hash128 rhs)
	{
		return default(int);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x2EDB5D0", Offset = "0x2ED9BD0", VA = "0x182EDB5D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009BD")]
	[Address(RVA = "0x2EDB150", Offset = "0x2ED9750", VA = "0x182EDB150")]
	[UnityEngine.Bindings.FreeFunction("StringToHash128", IsThreadSafe = true)]
	public static Hash128 Parse(string hashString)
	{
		return default(Hash128);
	}

	[Token(Token = "0x60009BE")]
	[Address(RVA = "0x2EDB050", Offset = "0x2ED9650", VA = "0x182EDB050")]
	[UnityEngine.Bindings.FreeFunction("Hash128ToString", IsThreadSafe = true)]
	private static string Hash128ToStringImpl(Hash128 hash)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009BF")]
	[Address(RVA = "0x2EDAE60", Offset = "0x2ED9460", VA = "0x182EDAE60")]
	[UnityEngine.Bindings.FreeFunction("ComputeHash128FromScriptPointer", IsThreadSafe = true)]
	private static extern void ComputeFromPtr(IntPtr data, int start, int count, int elemSize, ref Hash128 hash);

	[Token(Token = "0x60009C0")]
	public static Hash128 Compute<T>(ref T val) where T : struct
	{
		return default(Hash128);
	}

	[Token(Token = "0x60009C1")]
	[Address(RVA = "0x2EDAEB0", Offset = "0x2ED94B0", VA = "0x182EDAEB0")]
	public static Hash128 Compute(int val)
	{
		return default(Hash128);
	}

	[Token(Token = "0x60009C2")]
	public void Append<T>(ref T val) where T : struct
	{
	}

	[Token(Token = "0x60009C3")]
	[Address(RVA = "0x2EDACD0", Offset = "0x2ED92D0", VA = "0x182EDACD0")]
	public void Append(int val)
	{
	}

	[Token(Token = "0x60009C4")]
	[Address(RVA = "0x2EDAEF0", Offset = "0x2ED94F0", VA = "0x182EDAEF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x2EDAFB0", Offset = "0x2ED95B0", VA = "0x182EDAFB0", Slot = "6")]
	public bool Equals(Hash128 obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x2EDAFD0", Offset = "0x2ED95D0", VA = "0x182EDAFD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x2EDACE0", Offset = "0x2ED92E0", VA = "0x182EDACE0", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x2EDAFB0", Offset = "0x2ED95B0", VA = "0x182EDAFB0")]
	public static bool operator ==(Hash128 hash1, Hash128 hash2)
	{
		return default(bool);
	}

	[Token(Token = "0x60009C9")]
	[Address(RVA = "0x2EDB620", Offset = "0x2ED9C20", VA = "0x182EDB620")]
	public static bool operator !=(Hash128 hash1, Hash128 hash2)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CA")]
	[Address(RVA = "0x2EDB640", Offset = "0x2ED9C40", VA = "0x182EDB640")]
	public static bool operator <(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x2EDB5F0", Offset = "0x2ED9BF0", VA = "0x182EDB5F0")]
	public static bool operator >(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x2EDB4A0", Offset = "0x2ED9AA0", VA = "0x182EDB4A0")]
	private void ShortHash4(uint data)
	{
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x2EDB350", Offset = "0x2ED9950", VA = "0x182EDB350")]
	private static void ShortEnd(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x2EDB320", Offset = "0x2ED9920", VA = "0x182EDB320")]
	private static void Rot64(ref ulong x, int k)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x2EDB100", Offset = "0x2ED9700", VA = "0x182EDB100")]
	private static extern void Parse_Injected(ref ManagedSpanWrapper hashString, out Hash128 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x2EDB000", Offset = "0x2ED9600", VA = "0x182EDB000")]
	private static extern void Hash128ToStringImpl_Injected([In] ref Hash128 hash, out ManagedSpanWrapper ret);
}
