// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataObjectMethodAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200014A")]
[AttributeUsage(AttributeTargets.Method)]
public sealed class DataObjectMethodAttribute : Attribute
{
	[Token(Token = "0x170001BD")]
	public bool IsDefault
	{
		[Token(Token = "0x6000837")]
		[Address(RVA = "0x622EAA0", Offset = "0x622DAA0", VA = "0x622EAA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BE")]
	public DataObjectMethodType MethodType
	{
		[Token(Token = "0x6000838")]
		[Address(RVA = "0x622EAB0", Offset = "0x622DAB0", VA = "0x622EAB0")]
		[CompilerGenerated]
		get
		{
			return default(DataObjectMethodType);
		}
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x622EA60", Offset = "0x622DA60", VA = "0x622EA60")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x622EA80", Offset = "0x622DA80", VA = "0x622EA80")]
	public DataObjectMethodAttribute(DataObjectMethodType methodType, bool isDefault)
	{
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x622EAC0", Offset = "0x622DAC0", VA = "0x622EAC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x622EB40", Offset = "0x622DB40", VA = "0x622EB40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x622EBA0", Offset = "0x622DBA0", VA = "0x622EBA0", Slot = "5")]
	public override bool Match(object obj)
	{
		return default(bool);
	}
}
