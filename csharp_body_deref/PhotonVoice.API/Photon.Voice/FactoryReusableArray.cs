using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000042")]
public class FactoryReusableArray<T> : ObjectFactory<T[], int>, IDisposable
{
	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x0")]
	private T[] arr;

	[Token(Token = "0x1700005E")]
	public int Info
	{
		[Token(Token = "0x600015D")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015C")]
	public FactoryReusableArray(int size)
	{
	}

	[Token(Token = "0x600015E")]
	public T[] New()
	{
		return null;
	}

	[Token(Token = "0x600015F")]
	public T[] New(int size)
	{
		return null;
	}

	[Token(Token = "0x6000160")]
	public void Free(T[] obj)
	{
	}

	[Token(Token = "0x6000161")]
	public void Free(T[] obj, int info)
	{
	}

	[Token(Token = "0x6000162")]
	public void Dispose()
	{
	}
}
