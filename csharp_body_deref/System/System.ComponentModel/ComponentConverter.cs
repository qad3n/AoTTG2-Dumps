// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F6")]
public class ComponentConverter : ReferenceConverter
{
	[Token(Token = "0x600131D")]
	[Address(RVA = "0x48AF120", Offset = "0x48AF120", VA = "0x48AF120")]
	public ComponentConverter(Type type)
	{
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x48AF190", Offset = "0x48AF190", VA = "0x48AF190", Slot = "10")]
	public override PropertyDescriptorCollection GetProperties(ITypeDescriptorContext context, object value, Attribute[] attributes)
	{
		return null;
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x48AF1F0", Offset = "0x48AF1F0", VA = "0x48AF1F0", Slot = "11")]
	public override bool GetPropertiesSupported(ITypeDescriptorContext context)
	{
		return default(bool);
	}
}
