// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.ReflectionHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200010D")]
internal class ReflectionHelper
{
	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable _clrTypes;

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable _schemaTypes;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ParameterModifier[] empty_modifiers;

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4809C90", Offset = "0x4809C90", VA = "0x4809C90")]
	public void RegisterSchemaType(XmlTypeMapping map, string xmlType, string ns)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4809D40", Offset = "0x4809D40", VA = "0x4809D40")]
	public XmlTypeMapping GetRegisteredSchemaType(string xmlType, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4809DF0", Offset = "0x4809DF0", VA = "0x4809DF0")]
	public void RegisterClrType(XmlTypeMapping map, Type type, string ns)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4809F10", Offset = "0x4809F10", VA = "0x4809F10")]
	public XmlTypeMapping GetRegisteredClrType(Type type, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x480A040", Offset = "0x480A040", VA = "0x480A040")]
	public static void CheckSerializableType(Type type, bool allowPrivateConstructors)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x480A3E0", Offset = "0x480A3E0", VA = "0x480A3E0")]
	public ReflectionHelper()
	{
	}
}
