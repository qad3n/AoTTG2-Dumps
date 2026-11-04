// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.StructWrapping.StructWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x1CF8770", Offset = "0x1CF6D70", VA = "0x181CF8770")]
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
	[Address(RVA = "0x1CF8A30", Offset = "0x1CF7030", VA = "0x181CF8A30")]
	public static implicit operator StructWrapper(bool value)
	{
		return null;
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x1CF8D70", Offset = "0x1CF7370", VA = "0x181CF8D70")]
	public static implicit operator StructWrapper(byte value)
	{
		return null;
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x1CF89F0", Offset = "0x1CF6FF0", VA = "0x181CF89F0")]
	public static implicit operator StructWrapper(float value)
	{
		return null;
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x1CF8CF0", Offset = "0x1CF72F0", VA = "0x181CF8CF0")]
	public static implicit operator StructWrapper(double value)
	{
		return null;
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x1CF8D80", Offset = "0x1CF7380", VA = "0x181CF8D80")]
	public static implicit operator StructWrapper(short value)
	{
		return null;
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x1CF8D30", Offset = "0x1CF7330", VA = "0x181CF8D30")]
	public static implicit operator StructWrapper(int value)
	{
		return null;
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x1CF8F00", Offset = "0x1CF7500", VA = "0x181CF8F00")]
	public static implicit operator StructWrapper(long value)
	{
		return null;
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x1CF8E60", Offset = "0x1CF7460", VA = "0x181CF8E60")]
	public static implicit operator bool(StructWrapper wrapper)
	{
		return default(bool);
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x1CF8950", Offset = "0x1CF6F50", VA = "0x181CF8950")]
	public static implicit operator byte(StructWrapper wrapper)
	{
		return default(byte);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x1CF8AE0", Offset = "0x1CF70E0", VA = "0x181CF8AE0")]
	public static implicit operator float(StructWrapper wrapper)
	{
		return default(float);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x1CF87C0", Offset = "0x1CF6DC0", VA = "0x181CF87C0")]
	public static implicit operator double(StructWrapper wrapper)
	{
		return default(double);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x1CF8DC0", Offset = "0x1CF73C0", VA = "0x181CF8DC0")]
	public static implicit operator short(StructWrapper wrapper)
	{
		return default(short);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x1CF9000", Offset = "0x1CF7600", VA = "0x181CF9000")]
	public static implicit operator int(StructWrapper wrapper)
	{
		return default(int);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x1CF8A40", Offset = "0x1CF7040", VA = "0x181CF8A40")]
	public static implicit operator long(StructWrapper wrapper)
	{
		return default(long);
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x1CF8CA0", Offset = "0x1CF72A0", VA = "0x181CF8CA0")]
	public static implicit operator StructWrapper(Vector2 value)
	{
		return null;
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x1CF8900", Offset = "0x1CF6F00", VA = "0x181CF8900")]
	public static implicit operator StructWrapper(Vector3 value)
	{
		return null;
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x1CF8B80", Offset = "0x1CF7180", VA = "0x181CF8B80")]
	public static implicit operator StructWrapper(Quaternion value)
	{
		return null;
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x1CF8860", Offset = "0x1CF6E60", VA = "0x181CF8860")]
	public static implicit operator Vector2(StructWrapper wrapper)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x1CF8BD0", Offset = "0x1CF71D0", VA = "0x181CF8BD0")]
	public static implicit operator Vector3(StructWrapper wrapper)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x1CF8F40", Offset = "0x1CF7540", VA = "0x181CF8F40")]
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
