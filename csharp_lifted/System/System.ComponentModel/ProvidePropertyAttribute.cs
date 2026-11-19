// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ProvidePropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000196")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
public sealed class ProvidePropertyAttribute : Attribute
{
	[Token(Token = "0x1700025B")]
	public string PropertyName
	{
		[Token(Token = "0x6000ABE")]
		[Address(RVA = "0x62453B0", Offset = "0x62443B0", VA = "0x62453B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025C")]
	public string ReceiverTypeName
	{
		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x62453C0", Offset = "0x62443C0", VA = "0x62453C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025D")]
	public override object TypeId
	{
		[Token(Token = "0x6000AC2")]
		[Address(RVA = "0x62454A0", Offset = "0x62444A0", VA = "0x62454A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x6245310", Offset = "0x6244310", VA = "0x6245310")]
	public ProvidePropertyAttribute(string propertyName, Type receiverType)
	{
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x6245370", Offset = "0x6244370", VA = "0x6245370")]
	public ProvidePropertyAttribute(string propertyName, string receiverTypeName)
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x62453D0", Offset = "0x62443D0", VA = "0x62453D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x6245450", Offset = "0x6244450", VA = "0x6245450", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
