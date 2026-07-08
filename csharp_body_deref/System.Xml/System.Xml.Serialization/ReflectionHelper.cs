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
	[Address(RVA = "0x44CC530", Offset = "0x44CC530", VA = "0x44CC530")]
	public void RegisterSchemaType(XmlTypeMapping map, string xmlType, string ns)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x44CC5E0", Offset = "0x44CC5E0", VA = "0x44CC5E0")]
	public XmlTypeMapping GetRegisteredSchemaType(string xmlType, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x44CC690", Offset = "0x44CC690", VA = "0x44CC690")]
	public void RegisterClrType(XmlTypeMapping map, Type type, string ns)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x44CC7B0", Offset = "0x44CC7B0", VA = "0x44CC7B0")]
	public XmlTypeMapping GetRegisteredClrType(Type type, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x44CC8E0", Offset = "0x44CC8E0", VA = "0x44CC8E0")]
	public static void CheckSerializableType(Type type, bool allowPrivateConstructors)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x44CCC80", Offset = "0x44CCC80", VA = "0x44CCC80")]
	public ReflectionHelper()
	{
	}
}
