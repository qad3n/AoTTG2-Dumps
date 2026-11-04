// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UxmlElementAttribute
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000500")]
[AttributeUsage(AttributeTargets.Class, Inherited = false)]
public class UxmlElementAttribute : Attribute
{
	[Token(Token = "0x40010F7")]
	[FieldOffset(Offset = "0x10")]
	public readonly string name;

	[Token(Token = "0x40010F8")]
	[FieldOffset(Offset = "0x18")]
	public LibraryVisibility visibility;

	[Token(Token = "0x40010F9")]
	[FieldOffset(Offset = "0x20")]
	internal readonly Type[] supportedChildTypes;

	[Token(Token = "0x60026A8")]
	[Address(RVA = "0x31566F0", Offset = "0x3154CF0", VA = "0x1831566F0")]
	public UxmlElementAttribute(string uxmlName)
	{
	}

	[Token(Token = "0x60026A9")]
	[Address(RVA = "0x3156690", Offset = "0x3154C90", VA = "0x183156690")]
	public UxmlElementAttribute(string uxmlName, params Type[] supportedTypes)
	{
	}
}
