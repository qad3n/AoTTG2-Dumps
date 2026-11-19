// ==================== AoTTG2 cross-reference ====================
// Type: System.WeakReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001B8")]
[ComVisible(true)]
public class WeakReference : ISerializable
{
	[Token(Token = "0x4000897")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool isLongReference;

	[Token(Token = "0x4000898")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GCHandle gcHandle;

	[Token(Token = "0x17000183")]
	public virtual bool IsAlive
	{
		[Token(Token = "0x60010D3")]
		[Address(RVA = "0x5520DE0", Offset = "0x551FDE0", VA = "0x5520DE0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000184")]
	public virtual object Target
	{
		[Token(Token = "0x60010D4")]
		[Address(RVA = "0x5520E00", Offset = "0x551FE00", VA = "0x5520E00", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010D5")]
		[Address(RVA = "0x5520E30", Offset = "0x551FE30", VA = "0x5520E30", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000185")]
	public virtual bool TrackResurrection
	{
		[Token(Token = "0x60010D6")]
		[Address(RVA = "0x5520E40", Offset = "0x551FE40", VA = "0x5520E40", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x5520C50", Offset = "0x551FC50", VA = "0x5520C50")]
	private void AllocateHandle(object target)
	{
	}

	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x5520C70", Offset = "0x551FC70", VA = "0x5520C70")]
	protected WeakReference()
	{
	}

	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x5520C80", Offset = "0x551FC80", VA = "0x5520C80")]
	public WeakReference(object target)
	{
	}

	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x5520CB0", Offset = "0x551FCB0", VA = "0x5520CB0")]
	public WeakReference(object target, bool trackResurrection)
	{
	}

	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x5520CE0", Offset = "0x551FCE0", VA = "0x5520CE0")]
	protected WeakReference(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x5520E50", Offset = "0x551FE50", VA = "0x5520E50", Slot = "1")]
	~WeakReference()
	{
	}

	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x5520EE0", Offset = "0x551FEE0", VA = "0x5520EE0", Slot = "9")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
[Serializable]
[Token(Token = "0x20001B9")]
public sealed class WeakReference<T> : ISerializable where T : class
{
	[Token(Token = "0x4000899")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private GCHandle handle;

	[Token(Token = "0x400089A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool trackResurrection;

	[Token(Token = "0x60010D9")]
	public WeakReference(T target)
	{
	}

	[Token(Token = "0x60010DA")]
	public WeakReference(T target, bool trackResurrection)
	{
	}

	[Token(Token = "0x60010DB")]
	private WeakReference(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010DC")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010DD")]
	public void SetTarget(T target)
	{
	}

	[Token(Token = "0x60010DE")]
	public bool TryGetTarget(out T target)
	{
		return default(bool);
	}

	[Token(Token = "0x60010DF")]
	~WeakReference()
	{
	}
}
