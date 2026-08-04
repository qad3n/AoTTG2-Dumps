// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.StructWrapping.StructWrapperPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon.StructWrapping;

[Token(Token = "0x2000054")]
public class StructWrapperPool
{
	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x3E9C510", Offset = "0x3E9C510", VA = "0x3E9C510")]
	public static WrappedType GetWrappedType(Type type)
	{
		return default(WrappedType);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x3E9C700", Offset = "0x3E9C700", VA = "0x3E9C700")]
	public StructWrapperPool()
	{
	}
}
[Token(Token = "0x2000055")]
public class StructWrapperPool<T> : StructWrapperPool
{
	[Token(Token = "0x4000251")]
	public const int GROWBY = 4;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x0")]
	public readonly Type tType;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x0")]
	public readonly WrappedType wType;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x0")]
	public Stack<StructWrapper<T>> pool;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x0")]
	public readonly bool isStaticPool;

	[Token(Token = "0x170000C9")]
	public int Count
	{
		[Token(Token = "0x60003BD")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003BA")]
	public StructWrapperPool(bool isStaticPool)
	{
	}

	[Token(Token = "0x60003BB")]
	public StructWrapper<T> Acquire()
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	public StructWrapper<T> Acquire(T value)
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	internal void Release(StructWrapper<T> obj)
	{
	}
}
