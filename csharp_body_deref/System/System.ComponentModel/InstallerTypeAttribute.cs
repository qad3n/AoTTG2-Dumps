// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InstallerTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000172")]
[AttributeUsage(AttributeTargets.Class)]
public class InstallerTypeAttribute : Attribute
{
	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x10")]
	private string _typeName;

	[Token(Token = "0x170001FE")]
	public virtual Type InstallerType
	{
		[Token(Token = "0x600093D")]
		[Address(RVA = "0x6234990", Offset = "0x6233990", VA = "0x6234990", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x6234910", Offset = "0x6233910", VA = "0x6234910")]
	public InstallerTypeAttribute(Type installerType)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x6234960", Offset = "0x6233960", VA = "0x6234960")]
	public InstallerTypeAttribute(string typeName)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x6234A00", Offset = "0x6233A00", VA = "0x6234A00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x6234A90", Offset = "0x6233A90", VA = "0x6234A90", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
