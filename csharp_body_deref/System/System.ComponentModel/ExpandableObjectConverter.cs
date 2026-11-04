// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ExpandableObjectConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200019C")]
public class ExpandableObjectConverter : TypeConverter
{
	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public ExpandableObjectConverter()
	{
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x289DB60", Offset = "0x289C160", VA = "0x18289DB60", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
