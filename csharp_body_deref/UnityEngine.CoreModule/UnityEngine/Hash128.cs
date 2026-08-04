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
[Token(Token = "0x2000109")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/Hash128.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Hashing/Hash128.bindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct Hash128 : IComparable, IComparable<Hash128>, IEquatable<Hash128>
{
	[Token(Token = "0x4000356")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal ulong u64_0;

	[Token(Token = "0x4000357")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal ulong u64_1;

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x4DE29D0", Offset = "0x4DE29D0", VA = "0x4DE29D0")]
	public Hash128(ulong u64_0, ulong u64_1)
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4DE29E0", Offset = "0x4DE29E0", VA = "0x4DE29E0", Slot = "5")]
	public int CompareTo(Hash128 rhs)
	{
		return default(int);
	}

	[Token(Token = "0x6000734")]
	[Address(RVA = "0x4DE2A70", Offset = "0x4DE2A70", VA = "0x4DE2A70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x4DE2B10", Offset = "0x4DE2B10", VA = "0x4DE2B10")]
	[UnityEngine.Bindings.FreeFunction("StringToHash128", IsThreadSafe = true)]
	public static Hash128 Parse(string hashString)
	{
		return default(Hash128);
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x4DE2AC0", Offset = "0x4DE2AC0", VA = "0x4DE2AC0")]
	[UnityEngine.Bindings.FreeFunction("Hash128ToString", IsThreadSafe = true)]
	private static string Hash128ToStringImpl(Hash128 hash)
	{
		return null;
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x4DE2BD0", Offset = "0x4DE2BD0", VA = "0x4DE2BD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x4DE2C50", Offset = "0x4DE2C50", VA = "0x4DE2C50", Slot = "6")]
	public bool Equals(Hash128 obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x4DE2C60", Offset = "0x4DE2C60", VA = "0x4DE2C60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x4DE2C90", Offset = "0x4DE2C90", VA = "0x4DE2C90", Slot = "4")]
	public int CompareTo(object obj)
	{
		return default(int);
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x4DE2C40", Offset = "0x4DE2C40", VA = "0x4DE2C40")]
	public static bool operator ==(Hash128 hash1, Hash128 hash2)
	{
		return default(bool);
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4DE2A20", Offset = "0x4DE2A20", VA = "0x4DE2A20")]
	public static bool operator <(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4DE2A40", Offset = "0x4DE2A40", VA = "0x4DE2A40")]
	public static bool operator >(Hash128 x, Hash128 y)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4DE2B60", Offset = "0x4DE2B60", VA = "0x4DE2B60")]
	private static extern void Parse_Injected(string hashString, out Hash128 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600073F")]
	[Address(RVA = "0x4DE2BA0", Offset = "0x4DE2BA0", VA = "0x4DE2BA0")]
	private static extern string Hash128ToStringImpl_Injected([In] ref Hash128 hash);
}
