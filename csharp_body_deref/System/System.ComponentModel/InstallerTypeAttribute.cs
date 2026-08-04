// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InstallerTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48948F0", Offset = "0x48948F0", VA = "0x48948F0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x4894870", Offset = "0x4894870", VA = "0x4894870")]
	public InstallerTypeAttribute(Type installerType)
	{
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x48948C0", Offset = "0x48948C0", VA = "0x48948C0")]
	public InstallerTypeAttribute(string typeName)
	{
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x4894960", Offset = "0x4894960", VA = "0x4894960", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x4894A00", Offset = "0x4894A00", VA = "0x4894A00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
