// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExpandableObjectConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200015D")]
public class ExpandableObjectConverter : TypeConverter
{
	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x6233790", Offset = "0x6232790", VA = "0x6233790")]
	public ExpandableObjectConverter()
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x62337A0", Offset = "0x62327A0", VA = "0x62337A0", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x6233800", Offset = "0x6232800", VA = "0x6233800", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
