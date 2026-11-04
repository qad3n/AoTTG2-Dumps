// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.ConverterKeyComparer
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace Unity.Properties;

[Token(Token = "0x200005A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal sealed class ConverterKeyComparer : IEqualityComparer<ConverterKey>
{
	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ConverterKeyComparer Instance;

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x2FEA550", Offset = "0x2FE8B50", VA = "0x182FEA550", Slot = "4")]
	public bool Equals(ConverterKey x, ConverterKey y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x2FEA5D0", Offset = "0x2FE8BD0", VA = "0x182FEA5D0", Slot = "5")]
	public int GetHashCode(ConverterKey obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ConverterKeyComparer()
	{
	}
}
