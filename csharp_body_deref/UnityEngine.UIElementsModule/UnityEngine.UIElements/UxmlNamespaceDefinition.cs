// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlNamespaceDefinition
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000510")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct UxmlNamespaceDefinition : IEquatable<UxmlNamespaceDefinition>
{
	[Token(Token = "0x4001101")]
	[FieldOffset(Offset = "0x0")]
	public string prefix;

	[Token(Token = "0x4001102")]
	[FieldOffset(Offset = "0x8")]
	public string resolvedNamespace;

	[Token(Token = "0x170009F1")]
	public static UxmlNamespaceDefinition Empty
	{
		[Token(Token = "0x60026C5")]
		[Address(RVA = "0x3157720", Offset = "0x3155D20", VA = "0x183157720")]
		[CompilerGenerated]
		get
		{
			return default(UxmlNamespaceDefinition);
		}
	}

	[Token(Token = "0x60026C6")]
	[Address(RVA = "0x3157780", Offset = "0x3155D80", VA = "0x183157780")]
	public static bool operator ==(UxmlNamespaceDefinition lhs, UxmlNamespaceDefinition rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60026C7")]
	[Address(RVA = "0x3157570", Offset = "0x3155B70", VA = "0x183157570", Slot = "4")]
	public bool Equals(UxmlNamespaceDefinition other)
	{
		return default(bool);
	}

	[Token(Token = "0x60026C8")]
	[Address(RVA = "0x31574B0", Offset = "0x3155AB0", VA = "0x1831574B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60026C9")]
	[Address(RVA = "0x3157670", Offset = "0x3155C70", VA = "0x183157670", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
