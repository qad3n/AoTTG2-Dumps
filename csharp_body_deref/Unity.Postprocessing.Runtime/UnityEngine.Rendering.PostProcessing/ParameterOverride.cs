// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.ParameterOverride
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200004F")]
public abstract class ParameterOverride
{
	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x10")]
	public bool overrideState;

	[Token(Token = "0x60000BC")]
	internal abstract void Interp(ParameterOverride from, ParameterOverride to, float t);

	[Token(Token = "0x60000BD")]
	public abstract int GetHash();

	[Token(Token = "0x60000BE")]
	public T GetValue<T>()
	{
		return (T)null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4B4B340", Offset = "0x4B4B340", VA = "0x4B4B340", Slot = "6")]
	protected internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x4B4B350", Offset = "0x4B4B350", VA = "0x4B4B350", Slot = "7")]
	protected internal virtual void OnDisable()
	{
	}

	[Token(Token = "0x60000C1")]
	internal abstract void SetValue(ParameterOverride parameter);

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4B4B360", Offset = "0x4B4B360", VA = "0x4B4B360")]
	protected ParameterOverride()
	{
	}
}
[Serializable]
[Token(Token = "0x2000050")]
public class ParameterOverride<T> : ParameterOverride
{
	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x0")]
	public T value;

	[Token(Token = "0x60000C3")]
	public ParameterOverride()
	{
	}

	[Token(Token = "0x60000C4")]
	public ParameterOverride(T value)
	{
	}

	[Token(Token = "0x60000C5")]
	public ParameterOverride(T value, bool overrideState)
	{
	}

	[Token(Token = "0x60000C6")]
	internal override void Interp(ParameterOverride from, ParameterOverride to, float t)
	{
	}

	[Token(Token = "0x60000C7")]
	public virtual void Interp(T from, T to, float t)
	{
	}

	[Token(Token = "0x60000C8")]
	public void Override(T x)
	{
	}

	[Token(Token = "0x60000C9")]
	internal override void SetValue(ParameterOverride parameter)
	{
	}

	[Token(Token = "0x60000CA")]
	public override int GetHash()
	{
		return default(int);
	}

	[Token(Token = "0x60000CB")]
	public static implicit operator T(ParameterOverride<T> prop)
	{
		return (T)null;
	}
}
