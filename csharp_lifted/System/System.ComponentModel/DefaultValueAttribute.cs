// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultValueAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000112")]
[AttributeUsage(AttributeTargets.All)]
public class DefaultValueAttribute : Attribute
{
	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x10")]
	private object _value;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x0")]
	private static object s_convertFromInvariantString;

	[Token(Token = "0x1700016C")]
	public virtual object Value
	{
		[Token(Token = "0x60006BA")]
		[Address(RVA = "0x6220610", Offset = "0x621F610", VA = "0x6220610", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x621FD40", Offset = "0x621ED40", VA = "0x621FD40")]
	public DefaultValueAttribute(Type type, string value)
	{
	}

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x62201F0", Offset = "0x621F1F0", VA = "0x62201F0")]
	public DefaultValueAttribute(char value)
	{
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x6220240", Offset = "0x621F240", VA = "0x6220240")]
	public DefaultValueAttribute(byte value)
	{
	}

	[Token(Token = "0x60006AE")]
	[Address(RVA = "0x6220290", Offset = "0x621F290", VA = "0x6220290")]
	public DefaultValueAttribute(short value)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x62202E0", Offset = "0x621F2E0", VA = "0x62202E0")]
	public DefaultValueAttribute(int value)
	{
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x6220330", Offset = "0x621F330", VA = "0x6220330")]
	public DefaultValueAttribute(long value)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x6220380", Offset = "0x621F380", VA = "0x6220380")]
	public DefaultValueAttribute(float value)
	{
	}

	[Token(Token = "0x60006B2")]
	[Address(RVA = "0x62203D0", Offset = "0x621F3D0", VA = "0x62203D0")]
	public DefaultValueAttribute(double value)
	{
	}

	[Token(Token = "0x60006B3")]
	[Address(RVA = "0x6220420", Offset = "0x621F420", VA = "0x6220420")]
	public DefaultValueAttribute(bool value)
	{
	}

	[Token(Token = "0x60006B4")]
	[Address(RVA = "0x6220470", Offset = "0x621F470", VA = "0x6220470")]
	public DefaultValueAttribute(string value)
	{
	}

	[Token(Token = "0x60006B5")]
	[Address(RVA = "0x62204A0", Offset = "0x621F4A0", VA = "0x62204A0")]
	public DefaultValueAttribute(object value)
	{
	}

	[Token(Token = "0x60006B6")]
	[Address(RVA = "0x62204D0", Offset = "0x621F4D0", VA = "0x62204D0")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(sbyte value)
	{
	}

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x6220520", Offset = "0x621F520", VA = "0x6220520")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(ushort value)
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x6220570", Offset = "0x621F570", VA = "0x6220570")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(uint value)
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x62205C0", Offset = "0x621F5C0", VA = "0x62205C0")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(ulong value)
	{
	}

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x6220620", Offset = "0x621F620", VA = "0x6220620", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x6220720", Offset = "0x621F720", VA = "0x6220720", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x6220730", Offset = "0x621F730", VA = "0x6220730")]
	protected void SetValue(object value)
	{
	}
}
