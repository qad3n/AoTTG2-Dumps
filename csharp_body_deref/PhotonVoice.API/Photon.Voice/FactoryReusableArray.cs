// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.FactoryReusableArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectFactory.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000040")]
public class FactoryReusableArray<T> : ObjectFactory<T[], int>, IDisposable
{
	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x0")]
	private T[] arr;

	[Token(Token = "0x1700005E")]
	public int Info
	{
		[Token(Token = "0x600015B")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600015A")]
	public FactoryReusableArray(int size)
	{
	}

	[Token(Token = "0x600015C")]
	public T[] New()
	{
		return null;
	}

	[Token(Token = "0x600015D")]
	public T[] New(int size)
	{
		return null;
	}

	[Token(Token = "0x600015E")]
	public void Free(T[] obj)
	{
	}

	[Token(Token = "0x600015F")]
	public void Free(T[] obj, int info)
	{
	}

	[Token(Token = "0x6000160")]
	public void Dispose()
	{
	}
}
