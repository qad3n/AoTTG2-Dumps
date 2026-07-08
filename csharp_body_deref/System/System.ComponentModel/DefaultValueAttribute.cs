using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000246")]
[AttributeUsage(AttributeTargets.All)]
public class DefaultValueAttribute : Attribute
{
	[Token(Token = "0x4000CB6")]
	[FieldOffset(Offset = "0x10")]
	private object _value;

	[Token(Token = "0x4000CB7")]
	[FieldOffset(Offset = "0x0")]
	private static object s_convertFromInvariantString;

	[Token(Token = "0x1700032C")]
	public virtual object Value
	{
		[Token(Token = "0x6000E32")]
		[Address(RVA = "0x46AB5F0", Offset = "0x46AB5F0", VA = "0x46AB5F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x46AAC70", Offset = "0x46AAC70", VA = "0x46AAC70")]
	public DefaultValueAttribute(Type type, string value)
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x46AB1D0", Offset = "0x46AB1D0", VA = "0x46AB1D0")]
	public DefaultValueAttribute(char value)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x46AB220", Offset = "0x46AB220", VA = "0x46AB220")]
	public DefaultValueAttribute(byte value)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x46AB270", Offset = "0x46AB270", VA = "0x46AB270")]
	public DefaultValueAttribute(short value)
	{
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x46AB2C0", Offset = "0x46AB2C0", VA = "0x46AB2C0")]
	public DefaultValueAttribute(int value)
	{
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x46AB310", Offset = "0x46AB310", VA = "0x46AB310")]
	public DefaultValueAttribute(long value)
	{
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x46AB360", Offset = "0x46AB360", VA = "0x46AB360")]
	public DefaultValueAttribute(float value)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x46AB3B0", Offset = "0x46AB3B0", VA = "0x46AB3B0")]
	public DefaultValueAttribute(double value)
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x46AB400", Offset = "0x46AB400", VA = "0x46AB400")]
	public DefaultValueAttribute(bool value)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x46AB450", Offset = "0x46AB450", VA = "0x46AB450")]
	public DefaultValueAttribute(string value)
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x46AB480", Offset = "0x46AB480", VA = "0x46AB480")]
	public DefaultValueAttribute(object value)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x46AB4B0", Offset = "0x46AB4B0", VA = "0x46AB4B0")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(sbyte value)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x46AB500", Offset = "0x46AB500", VA = "0x46AB500")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(ushort value)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x46AB550", Offset = "0x46AB550", VA = "0x46AB550")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(uint value)
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x46AB5A0", Offset = "0x46AB5A0", VA = "0x46AB5A0")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(ulong value)
	{
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x46AB600", Offset = "0x46AB600", VA = "0x46AB600", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x46AB720", Offset = "0x46AB720", VA = "0x46AB720", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x46AB730", Offset = "0x46AB730", VA = "0x46AB730")]
	protected void SetValue(object value)
	{
	}
}
