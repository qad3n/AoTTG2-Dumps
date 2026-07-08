using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000041")]
internal sealed class DataTablePropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x170000CC")]
	public DataTable Table
	{
		[Token(Token = "0x60004C4")]
		[Address(RVA = "0x4254A60", Offset = "0x4254A60", VA = "0x4254A60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CD")]
	public override Type ComponentType
	{
		[Token(Token = "0x60004C6")]
		[Address(RVA = "0x4254AC0", Offset = "0x4254AC0", VA = "0x4254AC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60004C7")]
		[Address(RVA = "0x4254B20", Offset = "0x4254B20", VA = "0x4254B20", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CF")]
	public override Type PropertyType
	{
		[Token(Token = "0x60004C8")]
		[Address(RVA = "0x4254B30", Offset = "0x4254B30", VA = "0x4254B30", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4254A70", Offset = "0x4254A70", VA = "0x4254A70")]
	internal DataTablePropertyDescriptor(DataTable dataTable)
	{
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x4254B90", Offset = "0x4254B90", VA = "0x4254B90", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x4254BF0", Offset = "0x4254BF0", VA = "0x4254BF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x4254C20", Offset = "0x4254C20", VA = "0x4254C20", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4254C30", Offset = "0x4254C30", VA = "0x4254C30", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x4254C90", Offset = "0x4254C90", VA = "0x4254C90", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x60004CE")]
	[Address(RVA = "0x4254CA0", Offset = "0x4254CA0", VA = "0x4254CA0", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4254CB0", Offset = "0x4254CB0", VA = "0x4254CB0", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
