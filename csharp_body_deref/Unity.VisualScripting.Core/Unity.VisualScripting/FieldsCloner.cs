using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200000B")]
public sealed class FieldsCloner : ReflectedCloner
{
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x497AFC0", Offset = "0x497AFC0", VA = "0x497AFC0", Slot = "15")]
	protected override bool IncludeField(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x497AFD0", Offset = "0x497AFD0", VA = "0x497AFD0", Slot = "16")]
	protected override bool IncludeProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x497AFE0", Offset = "0x497AFE0", VA = "0x497AFE0")]
	public FieldsCloner()
	{
	}
}
