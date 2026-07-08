using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace ExitGames.Client.Photon.StructWrapping;

[Token(Token = "0x2000052")]
public abstract class StructWrapper : IDisposable
{
	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x10")]
	public readonly WrappedType wrappedType;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x18")]
	public readonly Type ttype;

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x3BA6450", Offset = "0x3BA6450", VA = "0x3BA6450")]
	public StructWrapper(Type ttype, WrappedType wrappedType)
	{
	}

	[Token(Token = "0x6000390")]
	public abstract object Box();

	[Token(Token = "0x6000391")]
	public abstract void DisconnectFromPool();

	[Token(Token = "0x6000392")]
	public abstract void Dispose();

	[Token(Token = "0x6000393")]
	public abstract string ToString(bool writeType);

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x3BA6480", Offset = "0x3BA6480", VA = "0x3BA6480")]
	public static implicit operator StructWrapper(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x3BA6490", Offset = "0x3BA6490", VA = "0x3BA6490")]
	public static implicit operator StructWrapper(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x3BA64A0", Offset = "0x3BA64A0", VA = "0x3BA64A0")]
	public static implicit operator StructWrapper(float value)
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x3BA64E0", Offset = "0x3BA64E0", VA = "0x3BA64E0")]
	public static implicit operator StructWrapper(double value)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x3BA6520", Offset = "0x3BA6520", VA = "0x3BA6520")]
	public static implicit operator StructWrapper(short value)
	{
		return null;
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x3BA6560", Offset = "0x3BA6560", VA = "0x3BA6560")]
	public static implicit operator StructWrapper(int value)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x3BA65A0", Offset = "0x3BA65A0", VA = "0x3BA65A0")]
	public static implicit operator StructWrapper(long value)
	{
		return null;
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x3BA65E0", Offset = "0x3BA65E0", VA = "0x3BA65E0")]
	public static implicit operator bool(StructWrapper wrapper)
	{
		return default(bool);
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x3BA6660", Offset = "0x3BA6660", VA = "0x3BA6660")]
	public static implicit operator byte(StructWrapper wrapper)
	{
		return default(byte);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x3BA66E0", Offset = "0x3BA66E0", VA = "0x3BA66E0")]
	public static implicit operator float(StructWrapper wrapper)
	{
		return default(float);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x3BA6760", Offset = "0x3BA6760", VA = "0x3BA6760")]
	public static implicit operator double(StructWrapper wrapper)
	{
		return default(double);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x3BA67E0", Offset = "0x3BA67E0", VA = "0x3BA67E0")]
	public static implicit operator short(StructWrapper wrapper)
	{
		return default(short);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x3BA6860", Offset = "0x3BA6860", VA = "0x3BA6860")]
	public static implicit operator int(StructWrapper wrapper)
	{
		return default(int);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x3BA68E0", Offset = "0x3BA68E0", VA = "0x3BA68E0")]
	public static implicit operator long(StructWrapper wrapper)
	{
		return default(long);
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x3BA6960", Offset = "0x3BA6960", VA = "0x3BA6960")]
	public static implicit operator StructWrapper(Vector2 value)
	{
		return null;
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x3BA69A0", Offset = "0x3BA69A0", VA = "0x3BA69A0")]
	public static implicit operator StructWrapper(Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x3BA69F0", Offset = "0x3BA69F0", VA = "0x3BA69F0")]
	public static implicit operator StructWrapper(Quaternion value)
	{
		return null;
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x3BA6A40", Offset = "0x3BA6A40", VA = "0x3BA6A40")]
	public static implicit operator Vector2(StructWrapper wrapper)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x3BA6AC0", Offset = "0x3BA6AC0", VA = "0x3BA6AC0")]
	public static implicit operator Vector3(StructWrapper wrapper)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x3BA6B40", Offset = "0x3BA6B40", VA = "0x3BA6B40")]
	public static implicit operator Quaternion(StructWrapper wrapper)
	{
		return default(Quaternion);
	}
}
[Token(Token = "0x2000053")]
public class StructWrapper<T> : StructWrapper
{
	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x0")]
	internal Pooling pooling;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x0")]
	internal T value;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x0")]
	internal static StructWrapperPool<T> staticPool;

	[Token(Token = "0x170000C8")]
	public StructWrapperPool<T> ReturnPool
	{
		[Token(Token = "0x60003A8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A9")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60003AA")]
	public StructWrapper(Pooling releasing)
	{
	}

	[Token(Token = "0x60003AB")]
	public StructWrapper(Pooling releasing, Type tType, WrappedType wType)
	{
	}

	[Token(Token = "0x60003AC")]
	public StructWrapper<T> Poke(byte value)
	{
		return null;
	}

	[Token(Token = "0x60003AD")]
	public StructWrapper<T> Poke(bool value)
	{
		return null;
	}

	[Token(Token = "0x60003AE")]
	public StructWrapper<T> Poke(T value)
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	public T Unwrap()
	{
		return (T)null;
	}

	[Token(Token = "0x60003B0")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x60003B1")]
	public override object Box()
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	public override void Dispose()
	{
	}

	[Token(Token = "0x60003B3")]
	public override void DisconnectFromPool()
	{
	}

	[Token(Token = "0x60003B4")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003B5")]
	public override string ToString(bool writeTypeInfo)
	{
		return null;
	}

	[Token(Token = "0x60003B6")]
	public static implicit operator StructWrapper<T>(T value)
	{
		return null;
	}
}
