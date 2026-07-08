using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000016")]
internal sealed class DataColumnPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x1700004D")]
	public override AttributeCollection Attributes
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x4209320", Offset = "0x4209320", VA = "0x4209320", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	internal DataColumn Column
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x42094E0", Offset = "0x42094E0", VA = "0x42094E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public override Type ComponentType
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x42094F0", Offset = "0x42094F0", VA = "0x42094F0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x4209550", Offset = "0x4209550", VA = "0x4209550", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000051")]
	public override Type PropertyType
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x4209570", Offset = "0x4209570", VA = "0x4209570", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public override bool IsBrowsable
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x4209940", Offset = "0x4209940", VA = "0x4209940", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x42092D0", Offset = "0x42092D0", VA = "0x42092D0")]
	internal DataColumnPropertyDescriptor(DataColumn dataColumn)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4209590", Offset = "0x4209590", VA = "0x4209590", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x42095F0", Offset = "0x42095F0", VA = "0x42095F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4209620", Offset = "0x4209620", VA = "0x4209620", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4209730", Offset = "0x4209730", VA = "0x4209730", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x42097B0", Offset = "0x42097B0", VA = "0x42097B0", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4209860", Offset = "0x4209860", VA = "0x4209860", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4209930", Offset = "0x4209930", VA = "0x4209930", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
