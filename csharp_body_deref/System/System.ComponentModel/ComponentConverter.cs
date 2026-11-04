// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000201")]
public class ComponentConverter : ReferenceConverter
{
	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x28AF490", Offset = "0x28ADA90", VA = "0x1828AF490")]
	public ComponentConverter(Type type)
	{
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x28AF430", Offset = "0x28ADA30", VA = "0x1828AF430", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
