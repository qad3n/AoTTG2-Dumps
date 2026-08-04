// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ImageBufferNativePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectPool.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000046")]
public class ImageBufferNativePool<T> : ObjectPool<T, ImageBufferInfo> where T : ImageBufferNative
{
	[Token(Token = "0x2000047")]
	public delegate T Factory(ImageBufferNativePool<T> pool, ImageBufferInfo info);

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x0")]
	private Factory factory;

	[Token(Token = "0x600017D")]
	public ImageBufferNativePool(int capacity, Factory factory, string name)
	{
	}

	[Token(Token = "0x600017E")]
	public ImageBufferNativePool(int capacity, Factory factory, string name, ImageBufferInfo info)
	{
	}

	[Token(Token = "0x600017F")]
	protected override T createObject(ImageBufferInfo info)
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	protected override void destroyObject(T obj)
	{
	}

	[Token(Token = "0x6000181")]
	protected override bool infosMatch(ImageBufferInfo i0, ImageBufferInfo i1)
	{
		return default(bool);
	}
}
