// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ObjectPool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/ObjectPool.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000042")]
public abstract class ObjectPool<TType, TInfo> : IDisposable
{
	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x0")]
	protected int capacity;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x0")]
	protected TInfo info;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x0")]
	private TType[] freeObj;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x0")]
	protected int pos;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x0")]
	protected string name;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x0")]
	private bool inited;

	[Token(Token = "0x17000060")]
	internal string LogPrefix
	{
		[Token(Token = "0x600016C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000061")]
	public TInfo Info
	{
		[Token(Token = "0x6000170")]
		get
		{
			return (TInfo)null;
		}
	}

	[Token(Token = "0x6000169")]
	protected abstract TType createObject(TInfo info);

	[Token(Token = "0x600016A")]
	protected abstract void destroyObject(TType obj);

	[Token(Token = "0x600016B")]
	protected abstract bool infosMatch(TInfo i0, TInfo i1);

	[Token(Token = "0x600016D")]
	public ObjectPool(int capacity, string name)
	{
	}

	[Token(Token = "0x600016E")]
	public ObjectPool(int capacity, string name, TInfo info)
	{
	}

	[Token(Token = "0x600016F")]
	public void Init(TInfo info)
	{
	}

	[Token(Token = "0x6000171")]
	public TType AcquireOrCreate()
	{
		return (TType)null;
	}

	[Token(Token = "0x6000172")]
	public TType AcquireOrCreate(TInfo info)
	{
		return (TType)null;
	}

	[Token(Token = "0x6000173")]
	public virtual bool Release(TType obj, TInfo objInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	public virtual bool Release(TType obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	public void Dispose()
	{
	}
}
