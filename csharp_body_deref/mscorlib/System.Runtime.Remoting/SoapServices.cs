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
		[Address(RVA = "0x3B707E0", Offset = "0x3B707E0", VA = "0x3B707E0")]
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
		[Address(RVA = "0x3B70030", Offset = "0x3B70030", VA = "0x3B70030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000349")]
	public static string XmlNsForClrTypeWithNs
	{
		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x3B70060", Offset = "0x3B70060", VA = "0x3B70060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034A")]
	public static string XmlNsForClrTypeWithNsAndAssembly
	{
		[Token(Token = "0x6001CC6")]
		[Address(RVA = "0x3B70090", Offset = "0x3B70090", VA = "0x3B70090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CC7")]
	[Address(RVA = "0x3B700C0", Offset = "0x3B700C0", VA = "0x3B700C0")]
	public static string CodeXmlNamespaceForClrTypeNamespace(string typeNamespace, string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001CC8")]
	[Address(RVA = "0x3B70310", Offset = "0x3B70310", VA = "0x3B70310")]
	private static string GetNameKey(string name, string namspace)
	{
		return null;
	}

	[Token(Token = "0x6001CC9")]
	[Address(RVA = "0x3B70370", Offset = "0x3B70370", VA = "0x3B70370")]
	private static string GetAssemblyName(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001CCA")]
	[Address(RVA = "0x3B70490", Offset = "0x3B70490", VA = "0x3B70490")]
	public static bool GetXmlElementForInteropType(Type type, out string xmlElement, out string xmlNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCB")]
	[Address(RVA = "0x3B705B0", Offset = "0x3B705B0", VA = "0x3B705B0")]
	public static string GetXmlNamespaceForMethodCall(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001CCC")]
	[Address(RVA = "0x3B70640", Offset = "0x3B70640", VA = "0x3B70640")]
	public static string GetXmlNamespaceForMethodResponse(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001CCD")]
	[Address(RVA = "0x3B706D0", Offset = "0x3B706D0", VA = "0x3B706D0")]
	public static bool GetXmlTypeForInteropType(Type type, out string xmlType, out string xmlTypeNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CCE")]
	[Address(RVA = "0x3B6A390", Offset = "0x3B6A390", VA = "0x3B6A390")]
	public static void PreLoad(Assembly assembly)
	{
	}

	[Token(Token = "0x6001CCF")]
	[Address(RVA = "0x3B69C90", Offset = "0x3B69C90", VA = "0x3B69C90")]
	public static void PreLoad(Type type)
	{
	}

	[Token(Token = "0x6001CD0")]
	[Address(RVA = "0x3B69970", Offset = "0x3B69970", VA = "0x3B69970")]
	public static void RegisterInteropXmlElement(string xmlElement, string xmlNamespace, Type type)
	{
	}

	[Token(Token = "0x6001CD1")]
	[Address(RVA = "0x3B69B00", Offset = "0x3B69B00", VA = "0x3B69B00")]
	public static void RegisterInteropXmlType(string xmlType, string xmlTypeNamespace, Type type)
	{
	}

	[Token(Token = "0x6001CD2")]
	[Address(RVA = "0x3B70240", Offset = "0x3B70240", VA = "0x3B70240")]
	private static string EncodeNs(string ns)
	{
		return null;
	}
}
