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
[Token(Token = "0x20001E0")]
[ComVisible(true)]
public class WeakReference : ISerializable
{
	[Token(Token = "0x4000939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private bool isLongReference;

	[Token(Token = "0x400093A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GCHandle gcHandle;

	[Token(Token = "0x17000184")]
	public virtual bool IsAlive
	{
		[Token(Token = "0x60010FC")]
		[Address(RVA = "0x1BA9640", Offset = "0x1BA7C40", VA = "0x181BA9640", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000185")]
	public virtual object Target
	{
		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x1BA9660", Offset = "0x1BA7C60", VA = "0x181BA9660", Slot = "6")]
		get
		{
			return null;
		}
		[Token(Token = "0x60010FE")]
		[Address(RVA = "0x1BA96A0", Offset = "0x1BA7CA0", VA = "0x181BA96A0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x17000186")]
	public virtual bool TrackResurrection
	{
		[Token(Token = "0x60010FF")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x1BA92F0", Offset = "0x1BA78F0", VA = "0x181BA92F0")]
	private void AllocateHandle(object target)
	{
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected WeakReference()
	{
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x1BA9490", Offset = "0x1BA7A90", VA = "0x181BA9490")]
	public WeakReference(object target)
	{
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x1BA94D0", Offset = "0x1BA7AD0", VA = "0x181BA94D0")]
	public WeakReference(object target, bool trackResurrection)
	{
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x1BA9520", Offset = "0x1BA7B20", VA = "0x181BA9520")]
	protected WeakReference(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x1BA9320", Offset = "0x1BA7920", VA = "0x181BA9320", Slot = "1")]
	~WeakReference()
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x1BA9380", Offset = "0x1BA7980", VA = "0x181BA9380", Slot = "9")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}
}
[Serializable]
[Token(Token = "0x20001E1")]
public sealed class WeakReference<T> : ISerializable where T : class
{
	[Token(Token = "0x400093B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private GCHandle handle;

	[Token(Token = "0x400093C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private bool trackResurrection;

	[Token(Token = "0x6001102")]
	public WeakReference(T target)
	{
	}

	[Token(Token = "0x6001103")]
	public WeakReference(T target, bool trackResurrection)
	{
	}

	[Token(Token = "0x6001104")]
	private WeakReference(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001105")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001106")]
	public void SetTarget(T target)
	{
	}

	[Token(Token = "0x6001107")]
	public bool TryGetTarget(out T target)
	{
		return default(bool);
	}

	[Token(Token = "0x6001108")]
	~WeakReference()
	{
	}
}
