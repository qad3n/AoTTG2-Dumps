using System.Collections;
using System.Reflection;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000352")]
[ComVisible(true)]
public class SoapServices
{
	[Token(Token = "0x2000353")]
	private class TypeInfo
	{
		[Token(Token = "0x4000EBA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Hashtable Attributes;

		[Token(Token = "0x4000EBB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Hashtable Elements;

		[Token(Token = "0x6001CD4")]
		[Address(RVA = "0x4E8ACC0", Offset = "0x4E8ACC0", VA = "0x4E8ACC0")]
		public TypeInfo()
		{
		}
	}

	[Token(Token = "0x4000EB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Hashtable _xmlTypes;

	[Token(Token = "0x4000EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Hashtable _xmlElements;

	[Token(Token = "0x4000EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Hashtable _soapActions;

	[Token(Token = "0x4000EB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Hashtable _soapActionsMethods;

	[Token(Token = "0x4000EB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Hashtable _typeInfos;

	[Token(Token = "0x17000348")]
	public static string XmlNsForClrTypeWithAssembly
	{
		[Token(Token = "0x6001CC4")]
		[Address(RVA = "0x4E8A510", Offset = "0x4E8A510", VA = "0x4E8A510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000349")]
	public static string XmlNsForClrTypeWithNs
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x4E8A540", Offset = "0x4E8A540", VA = "0x4E8A540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034A")]
	public static string XmlNsForClrTypeWithNsAndAssembly
	{
		[Token(Token = "0x6001CC6")]
		[Address(RVA = "0x4E8A570", Offset = "0x4E8A570", VA = "0x4E8A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CC7")]
	[Address(RVA = "0x4E8A5A0", Offset = "0x4E8A5A0", VA = "0x4E8A5A0")]
	public static string CodeXmlNamespaceForClrTypeNamespace(string typeNamespace, string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001CC8")]
	[Address(RVA = "0x4E8A7F0", Offset = "0x4E8A7F0", VA = "0x4E8A7F0")]
	private static string GetNameKey(string name, string namspace)
	{
		return null;
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x4E8A850", Offset = "0x4E8A850", VA = "0x4E8A850")]
	private static string GetAssemblyName(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001CCA")]
	[Address(RVA = "0x4E8A970", Offset = "0x4E8A970", VA = "0x4E8A970")]
	public static bool GetXmlElementForInteropType(Type type, out string xmlElement, out string xmlNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCB")]
	[Address(RVA = "0x4E8AA90", Offset = "0x4E8AA90", VA = "0x4E8AA90")]
	public static string GetXmlNamespaceForMethodCall(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001CCC")]
	[Address(RVA = "0x4E8AB20", Offset = "0x4E8AB20", VA = "0x4E8AB20")]
	public static string GetXmlNamespaceForMethodResponse(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001CCD")]
	[Address(RVA = "0x4E8ABB0", Offset = "0x4E8ABB0", VA = "0x4E8ABB0")]
	public static bool GetXmlTypeForInteropType(Type type, out string xmlType, out string xmlTypeNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCE")]
	[Address(RVA = "0x4E84870", Offset = "0x4E84870", VA = "0x4E84870")]
	public static void PreLoad(Assembly assembly)
	{
	}

	[Token(Token = "0x6001CCF")]
	[Address(RVA = "0x4E84170", Offset = "0x4E84170", VA = "0x4E84170")]
	public static void PreLoad(Type type)
	{
	}

	[Token(Token = "0x6001CD0")]
	[Address(RVA = "0x4E83E50", Offset = "0x4E83E50", VA = "0x4E83E50")]
	public static void RegisterInteropXmlElement(string xmlElement, string xmlNamespace, Type type)
	{
	}

	[Token(Token = "0x6001CD1")]
	[Address(RVA = "0x4E83FE0", Offset = "0x4E83FE0", VA = "0x4E83FE0")]
	public static void RegisterInteropXmlType(string xmlType, string xmlTypeNamespace, Type type)
	{
	}

	[Token(Token = "0x6001CD2")]
	[Address(RVA = "0x4E8A720", Offset = "0x4E8A720", VA = "0x4E8A720")]
	private static string EncodeNs(string ns)
	{
		return null;
	}
}
