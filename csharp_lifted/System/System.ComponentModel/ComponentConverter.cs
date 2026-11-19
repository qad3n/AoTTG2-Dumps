// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C2")]
public class ComponentConverter : ReferenceConverter
{
	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x624E500", Offset = "0x624D500", VA = "0x624E500")]
	public ComponentConverter(Type type)
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x624E570", Offset = "0x624D570", VA = "0x624E570", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x624E5D0", Offset = "0x624D5D0", VA = "0x624E5D0", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
