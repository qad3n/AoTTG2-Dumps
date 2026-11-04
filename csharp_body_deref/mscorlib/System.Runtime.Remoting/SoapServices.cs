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

[Token(Token = "0x2000381")]
[ComVisible(true)]
public class SoapServices
{
	[Token(Token = "0x2000382")]
	private class TypeInfo
	{
		[Token(Token = "0x4000EC7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Hashtable Attributes;

		[Token(Token = "0x4000EC8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Hashtable Elements;

		[Token(Token = "0x6001D43")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public TypeInfo()
		{
		}
	}

	[Token(Token = "0x4000EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Hashtable _xmlTypes;

	[Token(Token = "0x4000EC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static Hashtable _xmlElements;

	[Token(Token = "0x4000EC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Hashtable _soapActions;

	[Token(Token = "0x4000EC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static Hashtable _soapActionsMethods;

	[Token(Token = "0x4000EC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Hashtable _typeInfos;

	[Token(Token = "0x1700034A")]
	public static string XmlNsForClrTypeWithAssembly
	{
		[Token(Token = "0x6001D33")]
		[Address(RVA = "0x19E8040", Offset = "0x19E6640", VA = "0x1819E8040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034B")]
	public static string XmlNsForClrTypeWithNs
	{
		[Token(Token = "0x6001D34")]
		[Address(RVA = "0x19E80A0", Offset = "0x19E66A0", VA = "0x1819E80A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034C")]
	public static string XmlNsForClrTypeWithNsAndAssembly
	{
		[Token(Token = "0x6001D35")]
		[Address(RVA = "0x19E8070", Offset = "0x19E6670", VA = "0x1819E8070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D36")]
	[Address(RVA = "0x19E6D80", Offset = "0x19E5380", VA = "0x1819E6D80")]
	public static string CodeXmlNamespaceForClrTypeNamespace(string typeNamespace, string assemblyName)
	{
		return null;
	}

	[Token(Token = "0x6001D37")]
	[Address(RVA = "0x19E7100", Offset = "0x19E5700", VA = "0x1819E7100")]
	private static string GetNameKey(string name, string namspace)
	{
		return null;
	}

	[Token(Token = "0x6001D38")]
	[Address(RVA = "0x19E6FD0", Offset = "0x19E55D0", VA = "0x1819E6FD0")]
	private static string GetAssemblyName(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001D39")]
	[Address(RVA = "0x19E7160", Offset = "0x19E5760", VA = "0x1819E7160")]
	public static bool GetXmlElementForInteropType(Type type, out string xmlElement, out string xmlNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D3A")]
	[Address(RVA = "0x19E7270", Offset = "0x19E5870", VA = "0x1819E7270")]
	public static string GetXmlNamespaceForMethodCall(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001D3B")]
	[Address(RVA = "0x19E7310", Offset = "0x19E5910", VA = "0x1819E7310")]
	public static string GetXmlNamespaceForMethodResponse(MethodBase mb)
	{
		return null;
	}

	[Token(Token = "0x6001D3C")]
	[Address(RVA = "0x19E73B0", Offset = "0x19E59B0", VA = "0x1819E73B0")]
	public static bool GetXmlTypeForInteropType(Type type, out string xmlType, out string xmlTypeNamespace)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D3D")]
	[Address(RVA = "0x19E7B20", Offset = "0x19E6120", VA = "0x1819E7B20")]
	public static void PreLoad(Assembly assembly)
	{
	}

	[Token(Token = "0x6001D3E")]
	[Address(RVA = "0x19E74A0", Offset = "0x19E5AA0", VA = "0x1819E74A0")]
	public static void PreLoad(Type type)
	{
	}

	[Token(Token = "0x6001D3F")]
	[Address(RVA = "0x19E7BD0", Offset = "0x19E61D0", VA = "0x1819E7BD0")]
	public static void RegisterInteropXmlElement(string xmlElement, string xmlNamespace, Type type)
	{
	}

	[Token(Token = "0x6001D40")]
	[Address(RVA = "0x19E7D40", Offset = "0x19E6340", VA = "0x1819E7D40")]
	public static void RegisterInteropXmlType(string xmlType, string xmlTypeNamespace, Type type)
	{
	}

	[Token(Token = "0x6001D41")]
	[Address(RVA = "0x19E6F00", Offset = "0x19E5500", VA = "0x1819E6F00")]
	private static string EncodeNs(string ns)
	{
		return null;
	}
}
