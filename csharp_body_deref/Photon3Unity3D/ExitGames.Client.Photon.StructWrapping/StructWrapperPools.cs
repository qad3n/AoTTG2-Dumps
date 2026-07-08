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
	[Address(RVA = "0x3BA6DC0", Offset = "0x3BA6DC0", VA = "0x3BA6DC0")]
	public StructWrapper<byte> Acquire(byte value)
	{
		return null;
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x3BA6E50", Offset = "0x3BA6E50", VA = "0x3BA6E50")]
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
	[Address(RVA = "0x3BA6EE0", Offset = "0x3BA6EE0", VA = "0x3BA6EE0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x3BA7110", Offset = "0x3BA7110", VA = "0x3BA7110")]
	public StructWrapperPools()
	{
	}
}
