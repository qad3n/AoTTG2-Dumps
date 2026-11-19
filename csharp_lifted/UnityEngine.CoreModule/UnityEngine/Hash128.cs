// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Hash128
// Update status: unchanged since the previous dump
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
[Token(Token = "0x200012F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Hashing/Hash128.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/Hash128.h")]
public struct Hash128 : IComparable, IComparable<Hash128>, IEquatable<Hash128>
{
	[Token(Token = "0x40003B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal ulong u64_0;

	[Token(Token = "0x40003BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal ulong u64_1;

	[Token(Token = "0x40003BB")]
	private const ulong kConst = 16045690984833335023uL;

	[Token(Token = "0x60009CB")]
	[Address(RVA = "0x68F9AC0", Offset = "0x68F8AC0", VA = "0x68F9AC0")]
	public Hash128(ulong u64_0, ulong u64_1)
	{
	}

	[Token(Token = "0x60009CC")]
	[Address(RVA = "0x68F9AD0", Offset = "0x68F8AD0", VA = "0x68F9AD0", Slot = "5")]
	public int CompareTo(Hash128 rhs)
	{
		return default(int);
	}

	[Token(Token = "0x60009CD")]
	[Address(RVA = "0x68F9B60", Offset = "0x68F8B60", VA = "0x68F9B60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60009CE")]
	[Address(RVA = "0x68F9C40", Offset = "0x68F8C40", VA = "0x68F9C40")]
	[UnityEngine.Bindings.FreeFunction("StringToHash128", IsThreadSafe = true)]
	public static Hash128 Parse(string hashString)
	{
		return default(Hash128);
	}

	[Token(Token = "0x60009CF")]
	[Address(RVA = "0x68F9B70", Offset = "0x68F8B70", VA = "0x68F9B70")]
	[UnityEngine.Bindings.FreeFunction("Hash128ToString", IsThreadSafe = true)]
	private static string Hash128ToStringImpl(Hash128 hash)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x68F9E40", Offset = "0x68F8E40", VA = "0x68F9E40")]
	[UnityEngine.Bindings.FreeFunction("ComputeHash128FromScriptPointer", IsThreadSafe = true)]
	private static extern void ComputeFromPtr(IntPtr data, int start, int count, int elemSize, ref Hash128 hash);

	[Token(Token = "0x60009D1")]
	public static Hash128 Compute<T>(ref T val) where T : struct
	{
		return default(Hash128);
	}

	[Token(Token = "0x60009D2")]
	[Address(RVA = "0x68F9E90", Offset = "0x68F8E90", VA = "0x68F9E90")]
	public static Hash128 Compute(int val)
	{
		return default(Hash128);
	}

	[Token(Token = "0x60009D3")]
	public void Append<T>(ref T val) where T : struct
	{
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x68F9F30", Offset = "0x68F8F30", VA = "0x68F9F30")]
	public void Append(int val)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x68FA070", Offset = "0x68F9070", VA = "0x68FA070", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x68FA0F0", Offset = "0x68F90F0", VA = "0x68FA0F0", Slot = "6")]
	public bool Equals(Hash128 obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x68FA100", Offset = "0x68F9100", VA = "0x68FA100", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x68FA130", Offset = "0x68F9130", VA = "0x68FA130", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x68FA0E0", Offset = "0x68F90E0", VA = "0x68FA0E0")]
	public static bool operator ==(Hash128 hash1, Hash128 hash2)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x68FA1D0", Offset = "0x68F91D0", VA = "0x68FA1D0")]
	public static bool operator !=(Hash128 hash1, Hash128 hash2)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x68F9B10", Offset = "0x68F8B10", VA = "0x68F9B10")]
	public static bool operator <(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DC")]
	[Address(RVA = "0x68F9B30", Offset = "0x68F8B30", VA = "0x68F9B30")]
	public static bool operator >(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[Token(Token = "0x60009DD")]
	[Address(RVA = "0x68F9FD0", Offset = "0x68F8FD0", VA = "0x68F9FD0")]
	private void ShortHash4(uint data)
	{
	}

	[Token(Token = "0x60009DE")]
	[Address(RVA = "0x68FA1E0", Offset = "0x68F91E0", VA = "0x68FA1E0")]
	private static void ShortEnd(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x60009DF")]
	[Address(RVA = "0x68FA2C0", Offset = "0x68F92C0", VA = "0x68FA2C0")]
	private static void Rot64(ref ulong x, int k)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009E0")]
	[Address(RVA = "0x68F9DC0", Offset = "0x68F8DC0", VA = "0x68F9DC0")]
	private static extern void Parse_Injected(ref ManagedSpanWrapper hashString, out Hash128 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60009E1")]
	[Address(RVA = "0x68F9E00", Offset = "0x68F8E00", VA = "0x68F9E00")]
	private static extern void Hash128ToStringImpl_Injected([In] ref Hash128 hash, out ManagedSpanWrapper ret);
}
