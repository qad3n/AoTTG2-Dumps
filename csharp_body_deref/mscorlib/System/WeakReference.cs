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
		[Address(RVA = "0x3D1DB90", Offset = "0x3D1DB90", VA = "0x3D1DB90", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000183")]
	public virtual object Target
	{
		[Token(Token = "0x60010A4")]
		[Address(RVA = "0x3D1DBB0", Offset = "0x3D1DBB0", VA = "0x3D1DBB0", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010A5")]
		[Address(RVA = "0x3D1DBE0", Offset = "0x3D1DBE0", VA = "0x3D1DBE0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000184")]
	public virtual bool TrackResurrection
	{
		[Token(Token = "0x60010A6")]
		[Address(RVA = "0x3D1DC30", Offset = "0x3D1DC30", VA = "0x3D1DC30", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x3D1DA00", Offset = "0x3D1DA00", VA = "0x3D1DA00")]
	private void AllocateHandle(object target)
	{
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x3D1DA20", Offset = "0x3D1DA20", VA = "0x3D1DA20")]
	protected WeakReference()
	{
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x3D1DA30", Offset = "0x3D1DA30", VA = "0x3D1DA30")]
	public WeakReference(object target)
	{
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x3D1DA60", Offset = "0x3D1DA60", VA = "0x3D1DA60")]
	public WeakReference(object target, bool trackResurrection)
	{
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x3D1DA90", Offset = "0x3D1DA90", VA = "0x3D1DA90")]
	protected WeakReference(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x3D1DC40", Offset = "0x3D1DC40", VA = "0x3D1DC40", Slot = "1")]
	~WeakReference()
	{
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x3D1DCD0", Offset = "0x3D1DCD0", VA = "0x3D1DCD0", Slot = "9")]
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
