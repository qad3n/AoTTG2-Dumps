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

[Token(Token = "0x2000016")]
internal sealed class DataColumnPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x1700004D")]
	public override AttributeCollection Attributes
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x4546A80", Offset = "0x4546A80", VA = "0x4546A80", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	internal DataColumn Column
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x4546C40", Offset = "0x4546C40", VA = "0x4546C40")]
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
		[Address(RVA = "0x4546C50", Offset = "0x4546C50", VA = "0x4546C50", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x4546CB0", Offset = "0x4546CB0", VA = "0x4546CB0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000051")]
	public override Type PropertyType
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x4546CD0", Offset = "0x4546CD0", VA = "0x4546CD0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public override bool IsBrowsable
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x45470A0", Offset = "0x45470A0", VA = "0x45470A0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4546A30", Offset = "0x4546A30", VA = "0x4546A30")]
	internal DataColumnPropertyDescriptor(DataColumn dataColumn)
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4546CF0", Offset = "0x4546CF0", VA = "0x4546CF0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x4546D50", Offset = "0x4546D50", VA = "0x4546D50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4546D80", Offset = "0x4546D80", VA = "0x4546D80", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4546E90", Offset = "0x4546E90", VA = "0x4546E90", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4546F10", Offset = "0x4546F10", VA = "0x4546F10", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4546FC0", Offset = "0x4546FC0", VA = "0x4546FC0", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4547090", Offset = "0x4547090", VA = "0x4547090", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
