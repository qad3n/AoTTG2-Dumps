using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A6")]
[AttributeUsage(AttributeTargets.Class)]
public class InstallerTypeAttribute : Attribute
{
	[Token(Token = "0x4000D76")]
	[FieldOffset(Offset = "0x10")]
	private string _typeName;

	[Token(Token = "0x170003BE")]
	public virtual Type InstallerType
	{
		[Token(Token = "0x60010B5")]
		[Address(RVA = "0x456F7F0", Offset = "0x456F7F0", VA = "0x456F7F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x456F770", Offset = "0x456F770", VA = "0x456F770")]
	public InstallerTypeAttribute(Type installerType)
	{
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x456F7C0", Offset = "0x456F7C0", VA = "0x456F7C0")]
	public InstallerTypeAttribute(string typeName)
	{
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x456F860", Offset = "0x456F860", VA = "0x456F860", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x456F900", Offset = "0x456F900", VA = "0x456F900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
