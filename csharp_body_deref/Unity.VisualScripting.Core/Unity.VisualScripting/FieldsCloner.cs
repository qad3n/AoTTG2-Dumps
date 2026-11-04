// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FieldsCloner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200000A")]
public sealed class FieldsCloner : ReflectedCloner
{
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
	protected override bool IncludeField(FieldInfo field)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
	protected override bool IncludeProperty(PropertyInfo property)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2DA7B70", Offset = "0x2DA6170", VA = "0x182DA7B70")]
	public FieldsCloner()
	{
	}
}
