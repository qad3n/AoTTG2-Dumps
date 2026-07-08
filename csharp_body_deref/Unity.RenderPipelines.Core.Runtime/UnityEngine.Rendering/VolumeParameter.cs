using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001DF")]
public abstract class VolumeParameter : ICloneable
{
	[Token(Token = "0x4000819")]
	public const string k_DebuggerDisplay = "{m_Value} ({m_OverrideState})";

	[Token(Token = "0x400081A")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	protected bool m_OverrideState;

	[Token(Token = "0x17000199")]
	public virtual bool overrideState
	{
		[Token(Token = "0x6000D9D")]
		[Address(RVA = "0x48E5C60", Offset = "0x48E5C60", VA = "0x48E5C60", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D9E")]
		[Address(RVA = "0x48E5C70", Offset = "0x48E5C70", VA = "0x48E5C70", Slot = "6")]
		set
		{
		}
	}

	[Token(Token = "0x6000D9F")]
	internal abstract void Interp(VolumeParameter from, VolumeParameter to, float t);

	[Token(Token = "0x6000DA0")]
	public T GetValue<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x6000DA1")]
	public abstract void SetValue(VolumeParameter parameter);

	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x48E5C80", Offset = "0x48E5C80", VA = "0x48E5C80", Slot = "9")]
	protected internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x48E5C90", Offset = "0x48E5C90", VA = "0x48E5C90", Slot = "10")]
	protected internal virtual void OnDisable()
	{
	}

	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x48E28B0", Offset = "0x48E28B0", VA = "0x48E28B0")]
	public static bool IsObjectParameter(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x48E5CA0", Offset = "0x48E5CA0", VA = "0x48E5CA0", Slot = "11")]
	public virtual void Release()
	{
	}

	[Token(Token = "0x6000DA6")]
	public abstract object Clone();

	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x48E5CB0", Offset = "0x48E5CB0", VA = "0x48E5CB0")]
	protected VolumeParameter()
	{
	}
}
[Serializable]
[Token(Token = "0x20001E0")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class VolumeParameter<T> : VolumeParameter, IEquatable<VolumeParameter<T>>
{
	[Token(Token = "0x400081B")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	protected T m_Value;

	[Token(Token = "0x1700019A")]
	public virtual T value
	{
		[Token(Token = "0x6000DA8")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000DA9")]
		set
		{
		}
	}

	[Token(Token = "0x6000DAA")]
	public VolumeParameter()
	{
	}

	[Token(Token = "0x6000DAB")]
	protected VolumeParameter(T value, bool overrideState)
	{
	}

	[Token(Token = "0x6000DAC")]
	internal override void Interp(VolumeParameter from, VolumeParameter to, float t)
	{
	}

	[Token(Token = "0x6000DAD")]
	public virtual void Interp(T from, T to, float t)
	{
	}

	[Token(Token = "0x6000DAE")]
	public void Override(T x)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAF")]
	public override void SetValue(VolumeParameter parameter)
	{
	}

	[Token(Token = "0x6000DB0")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000DB1")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000DB2")]
	public static bool operator ==(VolumeParameter<T> lhs, T rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB3")]
	public static bool operator !=(VolumeParameter<T> lhs, T rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB4")]
	public bool Equals(VolumeParameter<T> other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB5")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB6")]
	public override object Clone()
	{
		return null;
	}

	[Token(Token = "0x6000DB7")]
	public static explicit operator T(VolumeParameter<T> prop)
	{
		return (T)null;
	}
}
