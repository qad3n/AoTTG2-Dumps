// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataColumnPropertyDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000032")]
internal sealed class DataColumnPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x1700008E")]
	public override AttributeCollection Attributes
	{
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x24EDA40", Offset = "0x24EC040", VA = "0x1824EDA40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	internal DataColumn Column
	{
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0xB5B9C0", Offset = "0xB59FC0", VA = "0x180B5B9C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public override Type ComponentType
	{
		[Token(Token = "0x60003C7")]
		[Address(RVA = "0x24EDC10", Offset = "0x24EC210", VA = "0x1824EDC10", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60003C8")]
		[Address(RVA = "0x24EDCB0", Offset = "0x24EC2B0", VA = "0x1824EDCB0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000092")]
	public override Type PropertyType
	{
		[Token(Token = "0x60003C9")]
		[Address(RVA = "0x24EDCD0", Offset = "0x24EC2D0", VA = "0x1824EDCD0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000093")]
	public override bool IsBrowsable
	{
		[Token(Token = "0x60003D1")]
		[Address(RVA = "0x24EDC60", Offset = "0x24EC260", VA = "0x1824EDC60", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x24ED9F0", Offset = "0x24EBFF0", VA = "0x1824ED9F0")]
	internal DataColumnPropertyDescriptor(DataColumn dataColumn)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x24ED6F0", Offset = "0x24EBCF0", VA = "0x1824ED6F0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x24ED780", Offset = "0x24EBD80", VA = "0x1824ED780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x24ED5C0", Offset = "0x24EBBC0", VA = "0x1824ED5C0", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x24ED7B0", Offset = "0x24EBDB0", VA = "0x1824ED7B0", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x24ED840", Offset = "0x24EBE40", VA = "0x1824ED840", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x24ED900", Offset = "0x24EBF00", VA = "0x1824ED900", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
