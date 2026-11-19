// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001FB")]
public abstract class VolumeParameter : ICloneable
{
	[Token(Token = "0x400098A")]
	public const string k_DebuggerDisplay = "{m_Value} ({m_OverrideState})";

	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	protected bool m_OverrideState;

	[Token(Token = "0x170001EA")]
	public virtual bool overrideState
	{
		[Token(Token = "0x6000EFA")]
		[Address(RVA = "0x65552F0", Offset = "0x65542F0", VA = "0x65552F0", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EFB")]
		[Address(RVA = "0x6555300", Offset = "0x6554300", VA = "0x6555300", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x6000EFC")]
	internal abstract void Interp(VolumeParameter from, VolumeParameter to, float t);

	[Token(Token = "0x6000EFD")]
	public T GetValue<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000EFE")]
	public abstract void SetValue(VolumeParameter parameter);

	[Token(Token = "0x6000EFF")]
	[Address(RVA = "0x6555310", Offset = "0x6554310", VA = "0x6555310", Slot = "9")]
	protected internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x6555320", Offset = "0x6554320", VA = "0x6555320", Slot = "10")]
	protected internal virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x6554F00", Offset = "0x6553F00", VA = "0x6554F00")]
	public static bool IsObjectParameter(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x6555330", Offset = "0x6554330", VA = "0x6555330", Slot = "11")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x6000F03")]
	public abstract object Clone();

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x6555340", Offset = "0x6554340", VA = "0x6555340")]
	protected VolumeParameter()
	{
	}
}
[Serializable]
[Token(Token = "0x20001FC")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class VolumeParameter<T> : VolumeParameter, IEquatable<VolumeParameter<T>>
{
	[Token(Token = "0x400098C")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	protected T m_Value;

	[Token(Token = "0x170001EB")]
	public virtual T value
	{
		[Token(Token = "0x6000F05")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000F06")]
		set
		{
		}
	}

	[Token(Token = "0x6000F07")]
	public VolumeParameter()
	{
	}

	[Token(Token = "0x6000F08")]
	protected VolumeParameter(T value, bool overrideState = false)
	{
	}

	[Token(Token = "0x6000F09")]
	internal override void Interp(VolumeParameter from, VolumeParameter to, float t)
	{
	}

	[Token(Token = "0x6000F0A")]
	public virtual void Interp(T from, T to, float t)
	{
	}

	[Token(Token = "0x6000F0B")]
	public void Override(T x)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F0C")]
	public override void SetValue(VolumeParameter parameter)
	{
	}

	[Token(Token = "0x6000F0D")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F0E")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	public static bool operator ==(VolumeParameter<T> lhs, T rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F10")]
	public static bool operator !=(VolumeParameter<T> lhs, T rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F11")]
	public bool Equals(VolumeParameter<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F12")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F13")]
	public override object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F14")]
	public static explicit operator T(VolumeParameter<T> prop)
	{
		return (T)null;
	}
}
