// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.StructWrapping.StructWrapperPools
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon.StructWrapping;

[Token(Token = "0x2000056")]
public class StructWrapperPools
{
	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x0")]
	public static readonly StructWrapper<byte>[] mappedByteWrappers;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x8")]
	public static readonly StructWrapper<bool>[] mappedBoolWrappers;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<Type, StructWrapperPool> pools;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<IDisposable> used;

	[Token(Token = "0x60003BF")]
	private StructWrapperPool<T> GetPoolForType<T>()
	{
		return null;
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x3E9C710", Offset = "0x3E9C710", VA = "0x3E9C710")]
	public StructWrapper<byte> Acquire(byte value)
	{
		return null;
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x3E9C7A0", Offset = "0x3E9C7A0", VA = "0x3E9C7A0")]
	public StructWrapper<bool> Acquire(bool value)
	{
		return null;
	}

	[Token(Token = "0x60003C2")]
	public StructWrapper<T> Acquire<T>(T value)
	{
		return null;
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x3E9C830", Offset = "0x3E9C830", VA = "0x3E9C830")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x3E9CA60", Offset = "0x3E9CA60", VA = "0x3E9CA60")]
	public StructWrapperPools()
	{
	}
}
