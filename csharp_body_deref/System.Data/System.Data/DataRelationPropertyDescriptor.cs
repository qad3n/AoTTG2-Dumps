using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000029")]
internal sealed class DataRelationPropertyDescriptor : PropertyDescriptor
{
	[Token(Token = "0x17000073")]
	internal DataRelation Relation
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x423BE50", Offset = "0x423BE50", VA = "0x423BE50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000074")]
	public override Type ComponentType
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x423BE60", Offset = "0x423BE60", VA = "0x423BE60", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public override bool IsReadOnly
	{
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x423BEC0", Offset = "0x423BEC0", VA = "0x423BEC0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000076")]
	public override Type PropertyType
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x423BED0", Offset = "0x423BED0", VA = "0x423BED0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x423BDF0", Offset = "0x423BDF0", VA = "0x423BDF0")]
	internal DataRelationPropertyDescriptor(DataRelation dataRelation)
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x423BF30", Offset = "0x423BF30", VA = "0x423BF30", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x423BF90", Offset = "0x423BF90", VA = "0x423BF90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x423BFC0", Offset = "0x423BFC0", VA = "0x423BFC0", Slot = "23")]
	public override bool CanResetValue(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x423BFD0", Offset = "0x423BFD0", VA = "0x423BFD0", Slot = "26")]
	public override object GetValue(object component)
	{
		return null;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x423C060", Offset = "0x423C060", VA = "0x423C060", Slot = "29")]
	public override void ResetValue(object component)
	{
	}

	[Token(Token = "0x60002E1")]
	[Address(RVA = "0x423C070", Offset = "0x423C070", VA = "0x423C070", Slot = "30")]
	public override void SetValue(object component, object value)
	{
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x423C080", Offset = "0x423C080", VA = "0x423C080", Slot = "31")]
	public override bool ShouldSerializeValue(object component)
	{
		return default(bool);
	}
}
