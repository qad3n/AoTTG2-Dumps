// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeParameter
// Update status: CHANGED in this game update
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
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000EFB")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0", Slot = "6")]
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
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected internal virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x2B662B0", Offset = "0x2B648B0", VA = "0x182B662B0")]
	public static bool IsObjectParameter(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "11")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x6000F03")]
	public abstract object Clone();

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
