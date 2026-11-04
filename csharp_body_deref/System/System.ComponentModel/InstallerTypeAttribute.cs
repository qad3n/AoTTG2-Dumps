// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InstallerTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B1")]
[AttributeUsage(AttributeTargets.Class)]
public class InstallerTypeAttribute : Attribute
{
	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x10")]
	private string _typeName;

	[Token(Token = "0x1700022D")]
	public virtual Type InstallerType
	{
		[Token(Token = "0x6000AFD")]
		[Address(RVA = "0x289EEC0", Offset = "0x289D4C0", VA = "0x18289EEC0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x289EE70", Offset = "0x289D470", VA = "0x18289EE70")]
	public InstallerTypeAttribute(Type installerType)
	{
	}

	[Token(Token = "0x6000AFC")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public InstallerTypeAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000AFE")]
	[Address(RVA = "0x289EDD0", Offset = "0x289D3D0", VA = "0x18289EDD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AFF")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
