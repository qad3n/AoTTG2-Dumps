// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.SoapServices
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200035A")]
[ComVisible(true)]
public class SoapServices
{
	[Token(Token = "0x200035B")]
	private class TypeInfo
	{
		[Token(Token = "0x4000E27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Hashtable Attributes;

		[Token(Token = "0x4000E28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Hashtable Elements;

		[Token(Token = "0x6001D19")]
		[Address(RVA = "0x5379160", Offset = "0x5378160", VA = "0x5379160")]
		public TypeInfo()
		{
		}
	}

	[Token(Token = "0x4000E22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Hashtable _xmlTypes;

	[Token(Token = "0x4000E23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Hashtable _xmlElements;

	[Token(Token = "0x4000E24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Hashtable _soapActions;

	[Token(Token = "0x4000E25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Hashtable _soapActionsMethods;

	[Token(Token = "0x4000E26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Hashtable _typeInfos;

	[Token(Token = "0x17000349")]
	public static string XmlNsForClrTypeWithAssembly
	{
		[Token(Token = "0x6001D09")]
		[Address(RVA = "0x53789C0", Offset = "0x53779C0", VA = "0x53789C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034A")]
	public static string XmlNsForClrTypeWithNs
	{
		[Token(Token = "0x6001D0A")]
		[Address(RVA = "0x53789F0", Offset = "0x53779F0", VA = "0x53789F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034B")]
	public static string XmlNsForClrTypeWithNsAndAssembly
	{
		[Token(Token = "0x6001D0B")]
		[Address(RVA = "0x5378A20", Offset = "0x5377A20", VA = "0x5378A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D0C")]
	[Address(RVA = "0x5378A50", Offset = "0x5377A50", VA = "0x5378A50")]
	public static string CodeXmlNamespaceForClrTypeNamespace(string typeNamespace, string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001D0D")]
	[Address(RVA = "0x5378CC0", Offset = "0x5377CC0", VA = "0x5378CC0")]
	private static string GetNameKey(string name, string namspace)
	{
		return null;
	}

	[Token(Token = "0x6001D0E")]
	[Address(RVA = "0x5378D20", Offset = "0x5377D20", VA = "0x5378D20")]
	private static string GetAssemblyName(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001D0F")]
	[Address(RVA = "0x5378E40", Offset = "0x5377E40", VA = "0x5378E40")]
	public static bool GetXmlElementForInteropType(Type type, out string xmlElement, out string xmlNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D10")]
	[Address(RVA = "0x5378F50", Offset = "0x5377F50", VA = "0x5378F50")]
	public static string GetXmlNamespaceForMethodCall(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001D11")]
	[Address(RVA = "0x5378FE0", Offset = "0x5377FE0", VA = "0x5378FE0")]
	public static string GetXmlNamespaceForMethodResponse(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001D12")]
	[Address(RVA = "0x5379070", Offset = "0x5378070", VA = "0x5379070")]
	public static bool GetXmlTypeForInteropType(Type type, out string xmlType, out string xmlTypeNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D13")]
	[Address(RVA = "0x53730D0", Offset = "0x53720D0", VA = "0x53730D0")]
	public static void PreLoad(Assembly assembly)
	{
	}

	[Token(Token = "0x6001D14")]
	[Address(RVA = "0x5372AD0", Offset = "0x5371AD0", VA = "0x5372AD0")]
	public static void PreLoad(Type type)
	{
	}

	[Token(Token = "0x6001D15")]
	[Address(RVA = "0x5372750", Offset = "0x5371750", VA = "0x5372750")]
	public static void RegisterInteropXmlElement(string xmlElement, string xmlNamespace, Type type)
	{
	}

	[Token(Token = "0x6001D16")]
	[Address(RVA = "0x5372910", Offset = "0x5371910", VA = "0x5372910")]
	public static void RegisterInteropXmlType(string xmlType, string xmlTypeNamespace, Type type)
	{
	}

	[Token(Token = "0x6001D17")]
	[Address(RVA = "0x5378BF0", Offset = "0x5377BF0", VA = "0x5378BF0")]
	private static string EncodeNs(string ns)
	{
		return null;
	}
}
