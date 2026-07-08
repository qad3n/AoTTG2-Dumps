using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000045")]
public class PrimitiveArrayPool<T> : ObjectPool<T[], int>
{
	[Token(Token = "0x6000178")]
	public PrimitiveArrayPool(int capacity, string name)
	{
	}

	[Token(Token = "0x6000179")]
	public PrimitiveArrayPool(int capacity, string name, int info)
	{
	}

	[Token(Token = "0x600017A")]
	protected override T[] createObject(int info)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	protected override void destroyObject(T[] obj)
	{
	}

	[Token(Token = "0x600017C")]
	protected override bool infosMatch(int i0, int i1)
	{
		return default(bool);
	}
}
