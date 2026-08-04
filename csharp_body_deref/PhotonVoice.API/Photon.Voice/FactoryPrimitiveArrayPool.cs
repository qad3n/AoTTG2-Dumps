// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.FactoryPrimitiveArrayPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectFactory.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000043")]
public class FactoryPrimitiveArrayPool<T> : ObjectFactory<T[], int>, IDisposable
{
	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x0")]
	private PrimitiveArrayPool<T> pool;

	[Token(Token = "0x1700005F")]
	public int Info
	{
		[Token(Token = "0x6000165")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000163")]
	public FactoryPrimitiveArrayPool(int capacity, string name)
	{
	}

	[Token(Token = "0x6000164")]
	public FactoryPrimitiveArrayPool(int capacity, string name, int info)
	{
	}

	[Token(Token = "0x6000166")]
	public T[] New()
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	public T[] New(int size)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	public void Free(T[] obj)
	{
	}

	[Token(Token = "0x6000169")]
	public void Free(T[] obj, int info)
	{
	}

	[Token(Token = "0x600016A")]
	public void Dispose()
	{
	}
}
