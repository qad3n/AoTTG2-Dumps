// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultValueAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000151")]
[AttributeUsage(AttributeTargets.All)]
public class DefaultValueAttribute : Attribute
{
	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x10")]
	private object _value;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x0")]
	private static object s_convertFromInvariantString;

	[Token(Token = "0x1700019B")]
	public virtual object Value
	{
		[Token(Token = "0x600087A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x287C980", Offset = "0x287AF80", VA = "0x18287C980")]
	public DefaultValueAttribute(Type type, string value)
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x28777F0", Offset = "0x2875DF0", VA = "0x1828777F0")]
	public DefaultValueAttribute(char value)
	{
	}

	[Token(Token = "0x600086D")]
	[Address(RVA = "0x2877930", Offset = "0x2875F30", VA = "0x182877930")]
	public DefaultValueAttribute(byte value)
	{
	}

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x28776B0", Offset = "0x2875CB0", VA = "0x1828776B0")]
	public DefaultValueAttribute(short value)
	{
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x28777A0", Offset = "0x2875DA0", VA = "0x1828777A0")]
	public DefaultValueAttribute(int value)
	{
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x2877750", Offset = "0x2875D50", VA = "0x182877750")]
	public DefaultValueAttribute(long value)
	{
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x2877840", Offset = "0x2875E40", VA = "0x182877840")]
	public DefaultValueAttribute(float value)
	{
	}

	[Token(Token = "0x6000872")]
	[Address(RVA = "0x2877980", Offset = "0x2875F80", VA = "0x182877980")]
	public DefaultValueAttribute(double value)
	{
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x2877700", Offset = "0x2875D00", VA = "0x182877700")]
	public DefaultValueAttribute(bool value)
	{
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DefaultValueAttribute(string value)
	{
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DefaultValueAttribute(object value)
	{
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x287C890", Offset = "0x287AE90", VA = "0x18287C890")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(sbyte value)
	{
	}

	[Token(Token = "0x6000877")]
	[Address(RVA = "0x287CD20", Offset = "0x287B320", VA = "0x18287CD20")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(ushort value)
	{
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x287C8E0", Offset = "0x287AEE0", VA = "0x18287C8E0")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(uint value)
	{
	}

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x287C930", Offset = "0x287AF30", VA = "0x18287C930")]
	[CLSCompliant(false)]
	public DefaultValueAttribute(ulong value)
	{
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x287C580", Offset = "0x287AB80", VA = "0x18287C580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
	protected void SetValue(object value)
	{
	}
}
