// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExpandableObjectConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000291")]
public class ExpandableObjectConverter : TypeConverter
{
	[Token(Token = "0x6001047")]
	[Address(RVA = "0x48936D0", Offset = "0x48936D0", VA = "0x48936D0")]
	public ExpandableObjectConverter()
	{
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x48936E0", Offset = "0x48936E0", VA = "0x48936E0", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x4893740", Offset = "0x4893740", VA = "0x4893740", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
