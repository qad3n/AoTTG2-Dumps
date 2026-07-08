using System;
using System.ComponentModel;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000178")]
public class JPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x17000203")]
	public override Type ComponentType
	{
		[Token(Token = "0x6000C72")]
		[Address(RVA = "0x3B25810", Offset = "0x3B25810", VA = "0x3B25810", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000C73")]
		[Address(RVA = "0x3B25870", Offset = "0x3B25870", VA = "0x3B25870", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000205")]
	public override Type PropertyType
	{
		[Token(Token = "0x6000C74")]
		[Address(RVA = "0x3B25880", Offset = "0x3B25880", VA = "0x3B25880", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	protected override int NameHashCode
	{
		[Token(Token = "0x6000C75")]
		[Address(RVA = "0x3B258C0", Offset = "0x3B258C0", VA = "0x3B258C0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x3B21890", Offset = "0x3B21890", VA = "0x3B21890")]
	public JPropertyDescriptor(string name)
	{
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x3B25590", Offset = "0x3B25590", VA = "0x3B25590")]
	private static JObject CastInstance(object instance)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x3B255F0", Offset = "0x3B255F0", VA = "0x3B255F0", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x3B25600", Offset = "0x3B25600", VA = "0x3B25600", Slot = "26")]
	public override object? GetValue(object? component)
	{
		return null;
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x3B256E0", Offset = "0x3B256E0", VA = "0x3B256E0", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x3B256F0", Offset = "0x3B256F0", VA = "0x3B256F0", Slot = "30")]
	public override void SetValue(object? component, object? value)
	{
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x3B25800", Offset = "0x3B25800", VA = "0x3B25800", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
