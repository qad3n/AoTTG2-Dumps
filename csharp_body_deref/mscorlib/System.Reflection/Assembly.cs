// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.Assembly
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.IO;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Security.Policy;
using System.Threading;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000509")]
[ClassInterface(ClassInterfaceType.None)]
[ComVisible(true)]
[ComDefaultInterface(typeof(_Assembly))]
public class Assembly : ICustomAttributeProvider, ISerializable, _Assembly
{
	[Token(Token = "0x200050A")]
	internal class ResolveEventHolder
	{
		[Token(Token = "0x60025E8")]
		[Address(RVA = "0x3BDC1F0", Offset = "0x3BDC1F0", VA = "0x3BDC1F0")]
		public ResolveEventHolder()
		{
		}
	}

	[Token(Token = "0x1700053A")]
	public virtual string CodeBase
	{
		[Token(Token = "0x60025B4")]
		[Address(RVA = "0x3BDB1A0", Offset = "0x3BDB1A0", VA = "0x3BDB1A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053B")]
	public virtual string EscapedCodeBase
	{
		[Token(Token = "0x60025B5")]
		[Address(RVA = "0x3BDB1E0", Offset = "0x3BDB1E0", VA = "0x3BDB1E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	public virtual string FullName
	{
		[Token(Token = "0x60025B6")]
		[Address(RVA = "0x3BDB220", Offset = "0x3BDB220", VA = "0x3BDB220", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	internal virtual IntPtr MonoAssembly
	{
		[Token(Token = "0x60025B7")]
		[Address(RVA = "0x3BDB260", Offset = "0x3BDB260", VA = "0x3BDB260", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x1700053E")]
	public virtual string Location
	{
		[Token(Token = "0x60025B8")]
		[Address(RVA = "0x3BDB2A0", Offset = "0x3BDB2A0", VA = "0x3BDB2A0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053F")]
	[ComVisible(false)]
	public virtual bool ReflectionOnly
	{
		[Token(Token = "0x60025DC")]
		[Address(RVA = "0x3BDC060", Offset = "0x3BDC060", VA = "0x3BDC060", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000540")]
	[System.MonoTODO]
	public bool IsFullyTrusted
	{
		[Token(Token = "0x60025E0")]
		[Address(RVA = "0x3BDC120", Offset = "0x3BDC120", VA = "0x3BDC120")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000541")]
	public virtual bool IsDynamic
	{
		[Token(Token = "0x60025E4")]
		[Address(RVA = "0x3BDC190", Offset = "0x3BDC190", VA = "0x3BDC190", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60025B9")]
	[Address(RVA = "0x3BDB2E0", Offset = "0x3BDB2E0", VA = "0x3BDB2E0", Slot = "13")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025BA")]
	[Address(RVA = "0x3BDB320", Offset = "0x3BDB320", VA = "0x3BDB320", Slot = "14")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60025BB")]
	[Address(RVA = "0x3BDB360", Offset = "0x3BDB360", VA = "0x3BDB360", Slot = "15")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025BC")]
	[Address(RVA = "0x3BDB3A0", Offset = "0x3BDB3A0", VA = "0x3BDB3A0", Slot = "16")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025BD")]
	[Address(RVA = "0x3BDB3E0", Offset = "0x3BDB3E0", VA = "0x3BDB3E0", Slot = "17")]
	public virtual Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x60025BE")]
	[Address(RVA = "0x3BDB420", Offset = "0x3BDB420", VA = "0x3BDB420")]
	internal Stream GetManifestResourceStream(Type type, string name, bool skipSecurityCheck, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60025BF")]
	[Address(RVA = "0x3BDB5C0", Offset = "0x3BDB5C0", VA = "0x3BDB5C0")]
	internal Stream GetManifestResourceStream(string name, ref System.Threading.StackCrawlMark stackMark, bool skipSecurityCheck)
	{
		return null;
	}

	[Token(Token = "0x60025C0")]
	[Address(RVA = "0x3BDB5D0", Offset = "0x3BDB5D0", VA = "0x3BDB5D0")]
	internal string GetSimpleName()
	{
		return null;
	}

	[Token(Token = "0x60025C1")]
	[Address(RVA = "0x3BDB600", Offset = "0x3BDB600", VA = "0x3BDB600")]
	internal byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x60025C2")]
	[Address(RVA = "0x3BDB630", Offset = "0x3BDB630", VA = "0x3BDB630")]
	internal Version GetVersion()
	{
		return null;
	}

	[Token(Token = "0x60025C3")]
	[Address(RVA = "0x3BDB660", Offset = "0x3BDB660", VA = "0x3BDB660")]
	private AssemblyNameFlags GetFlags()
	{
		return default(AssemblyNameFlags);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025C4")]
	[Address(RVA = "0x3BDB690", Offset = "0x3BDB690", VA = "0x3BDB690", Slot = "18")]
	internal virtual extern Type[] GetTypes(bool exportedOnly);

	[Token(Token = "0x60025C5")]
	[Address(RVA = "0x3BDB6A0", Offset = "0x3BDB6A0", VA = "0x3BDB6A0", Slot = "19")]
	public virtual Type[] GetTypes()
	{
		return null;
	}

	[Token(Token = "0x60025C6")]
	[Address(RVA = "0x3BDB6C0", Offset = "0x3BDB6C0", VA = "0x3BDB6C0", Slot = "20")]
	public virtual Type GetType(string name, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x60025C7")]
	[Address(RVA = "0x3BDB6E0", Offset = "0x3BDB6E0", VA = "0x3BDB6E0", Slot = "21")]
	public virtual Type GetType(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025C8")]
	[Address(RVA = "0x3BDB700", Offset = "0x3BDB700", VA = "0x3BDB700")]
	internal extern Type InternalGetType(Module module, string name, bool throwOnError, bool ignoreCase);

	[Token(Token = "0x60025C9")]
	[Address(RVA = "0x3BDB710", Offset = "0x3BDB710", VA = "0x3BDB710", Slot = "22")]
	public virtual AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x60025CA")]
	[Address(RVA = "0x3BDB750", Offset = "0x3BDB750", VA = "0x3BDB750", Slot = "23")]
	public virtual AssemblyName GetName()
	{
		return null;
	}

	[Token(Token = "0x60025CB")]
	[Address(RVA = "0x3BDB770", Offset = "0x3BDB770", VA = "0x3BDB770", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60025CC")]
	[Address(RVA = "0x3BDB780", Offset = "0x3BDB780", VA = "0x3BDB780")]
	public static Assembly GetAssembly(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025CD")]
	[Address(RVA = "0x3BDB820", Offset = "0x3BDB820", VA = "0x3BDB820")]
	public static extern Assembly GetEntryAssembly();

	[Token(Token = "0x60025CE")]
	[Address(RVA = "0x3BDB830", Offset = "0x3BDB830", VA = "0x3BDB830")]
	internal System.Reflection.RuntimeAssembly InternalGetSatelliteAssembly(string name, CultureInfo culture, Version version, bool throwOnFileNotFound, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025CF")]
	[Address(RVA = "0x3BDBD90", Offset = "0x3BDBD90", VA = "0x3BDBD90")]
	private static extern Assembly LoadFrom(string assemblyFile, bool refOnly, ref System.Threading.StackCrawlMark stackMark);

	[Token(Token = "0x60025D0")]
	[Address(RVA = "0x3BDBDA0", Offset = "0x3BDBDA0", VA = "0x3BDBDA0")]
	public static Assembly Load(string assemblyString)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60025D1")]
	[Address(RVA = "0x3BDBDD0", Offset = "0x3BDBDD0", VA = "0x3BDBDD0")]
	public static Assembly ReflectionOnlyLoad(string assemblyString)
	{
		return null;
	}

	[Token(Token = "0x60025D2")]
	[Address(RVA = "0x3BDBE20", Offset = "0x3BDBE20", VA = "0x3BDBE20")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025D3")]
	[Address(RVA = "0x3BDBEC0", Offset = "0x3BDBEC0", VA = "0x3BDBEC0")]
	private static extern Assembly load_with_partial_name(string name, Evidence e);

	[Token(Token = "0x60025D4")]
	[Address(RVA = "0x3BDBE70", Offset = "0x3BDBE70", VA = "0x3BDBE70")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence)
	{
		return null;
	}

	[Token(Token = "0x60025D5")]
	[Address(RVA = "0x3BDBED0", Offset = "0x3BDBED0", VA = "0x3BDBED0")]
	internal static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence, bool oldBehavior)
	{
		return null;
	}

	[Token(Token = "0x60025D6")]
	[Address(RVA = "0x3BDBF40", Offset = "0x3BDBF40", VA = "0x3BDBF40", Slot = "24")]
	public Module[] GetModules()
	{
		return null;
	}

	[Token(Token = "0x60025D7")]
	[Address(RVA = "0x3BDBF60", Offset = "0x3BDBF60", VA = "0x3BDBF60", Slot = "25")]
	internal virtual Module[] GetModulesInternal()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025D8")]
	[Address(RVA = "0x3BDBFA0", Offset = "0x3BDBFA0", VA = "0x3BDBFA0")]
	public static extern Assembly GetExecutingAssembly();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025D9")]
	[Address(RVA = "0x3BDBFD0", Offset = "0x3BDBFD0", VA = "0x3BDBFD0")]
	public static extern Assembly GetCallingAssembly();

	[Token(Token = "0x60025DA")]
	[Address(RVA = "0x3BDBFE0", Offset = "0x3BDBFE0", VA = "0x3BDBFE0", Slot = "26")]
	public virtual string[] GetManifestResourceNames()
	{
		return null;
	}

	[Token(Token = "0x60025DB")]
	[Address(RVA = "0x3BDC020", Offset = "0x3BDC020", VA = "0x3BDC020", Slot = "27")]
	public virtual ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[Token(Token = "0x60025DD")]
	[Address(RVA = "0x3BDC0A0", Offset = "0x3BDC0A0", VA = "0x3BDC0A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60025DE")]
	[Address(RVA = "0x3BDC0B0", Offset = "0x3BDC0B0", VA = "0x3BDC0B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60025DF")]
	[Address(RVA = "0x3BDC0C0", Offset = "0x3BDC0C0", VA = "0x3BDC0C0")]
	private static Exception CreateNIE()
	{
		return null;
	}

	[Token(Token = "0x60025E1")]
	[Address(RVA = "0x3BDC130", Offset = "0x3BDC130", VA = "0x3BDC130", Slot = "29")]
	public virtual Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60025E2")]
	[Address(RVA = "0x3BDC150", Offset = "0x3BDC150", VA = "0x3BDC150", Slot = "30")]
	public virtual Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x60025E3")]
	[Address(RVA = "0x3BDC170", Offset = "0x3BDC170", VA = "0x3BDC170", Slot = "31")]
	public virtual Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x60025E5")]
	[Address(RVA = "0x3BDC1A0", Offset = "0x3BDC1A0", VA = "0x3BDC1A0")]
	public static bool operator ==(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025E6")]
	[Address(RVA = "0x3BDBD50", Offset = "0x3BDBD50", VA = "0x3BDBD50")]
	public static bool operator !=(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025E7")]
	[Address(RVA = "0x3BDC1E0", Offset = "0x3BDC1E0", VA = "0x3BDC1E0")]
	public Assembly()
	{
	}
}
