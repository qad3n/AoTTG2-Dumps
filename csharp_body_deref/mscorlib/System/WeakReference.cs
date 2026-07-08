using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001B5")]
[ComVisible(true)]
public class WeakReference : ISerializable
{
	[Token(Token = "0x40008D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool isLongReference;

	[Token(Token = "0x40008D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GCHandle gcHandle;

	[Token(Token = "0x17000182")]
	public virtual bool IsAlive
	{
		[Token(Token = "0x60010A3")]
		[Address(RVA = "0x5038070", Offset = "0x5038070", VA = "0x5038070", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000183")]
	public virtual object Target
	{
		[Token(Token = "0x60010A4")]
		[Address(RVA = "0x5038090", Offset = "0x5038090", VA = "0x5038090", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010A5")]
		[Address(RVA = "0x50380C0", Offset = "0x50380C0", VA = "0x50380C0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000184")]
	public virtual bool TrackResurrection
	{
		[Token(Token = "0x60010A6")]
		[Address(RVA = "0x5038110", Offset = "0x5038110", VA = "0x5038110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x5037EE0", Offset = "0x5037EE0", VA = "0x5037EE0")]
	private void AllocateHandle(object target)
	{
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x5037F00", Offset = "0x5037F00", VA = "0x5037F00")]
	protected WeakReference()
	{
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x5037F10", Offset = "0x5037F10", VA = "0x5037F10")]
	public WeakReference(object target)
	{
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x5037F40", Offset = "0x5037F40", VA = "0x5037F40")]
	public WeakReference(object target, bool trackResurrection)
	{
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x5037F70", Offset = "0x5037F70", VA = "0x5037F70")]
	protected WeakReference(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x5038120", Offset = "0x5038120", VA = "0x5038120", Slot = "1")]
	~WeakReference()
	{
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x50381B0", Offset = "0x50381B0", VA = "0x50381B0", Slot = "9")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
[Serializable]
[Token(Token = "0x20001B6")]
public sealed class WeakReference<T> : ISerializable where T : class
{
	[Token(Token = "0x40008D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private GCHandle handle;

	[Token(Token = "0x40008D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool trackResurrection;

	[Token(Token = "0x60010A9")]
	public WeakReference(T target)
	{
	}

	[Token(Token = "0x60010AA")]
	public WeakReference(T target, bool trackResurrection)
	{
	}

	[Token(Token = "0x60010AB")]
	private WeakReference(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010AC")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010AD")]
	public void SetTarget(T target)
	{
	}

	[Token(Token = "0x60010AE")]
	public bool TryGetTarget(out T target)
	{
		return default(bool);
	}

	[Token(Token = "0x60010AF")]
	~WeakReference()
	{
	}
}
