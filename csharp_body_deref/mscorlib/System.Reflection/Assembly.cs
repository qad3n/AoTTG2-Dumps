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
		[Address(RVA = "0x4EF66D0", Offset = "0x4EF66D0", VA = "0x4EF66D0")]
		public ResolveEventHolder()
		{
		}
	}

	[Token(Token = "0x1700053A")]
	public virtual string CodeBase
	{
		[Token(Token = "0x60025B4")]
		[Address(RVA = "0x4EF5680", Offset = "0x4EF5680", VA = "0x4EF5680", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053B")]
	public virtual string EscapedCodeBase
	{
		[Token(Token = "0x60025B5")]
		[Address(RVA = "0x4EF56C0", Offset = "0x4EF56C0", VA = "0x4EF56C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053C")]
	public virtual string FullName
	{
		[Token(Token = "0x60025B6")]
		[Address(RVA = "0x4EF5700", Offset = "0x4EF5700", VA = "0x4EF5700", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	internal virtual IntPtr MonoAssembly
	{
		[Token(Token = "0x60025B7")]
		[Address(RVA = "0x4EF5740", Offset = "0x4EF5740", VA = "0x4EF5740", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x1700053E")]
	public virtual string Location
	{
		[Token(Token = "0x60025B8")]
		[Address(RVA = "0x4EF5780", Offset = "0x4EF5780", VA = "0x4EF5780", Slot = "12")]
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
		[Address(RVA = "0x4EF6540", Offset = "0x4EF6540", VA = "0x4EF6540", Slot = "28")]
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
		[Address(RVA = "0x4EF6600", Offset = "0x4EF6600", VA = "0x4EF6600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000541")]
	public virtual bool IsDynamic
	{
		[Token(Token = "0x60025E4")]
		[Address(RVA = "0x4EF6670", Offset = "0x4EF6670", VA = "0x4EF6670", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60025B9")]
	[Address(RVA = "0x4EF57C0", Offset = "0x4EF57C0", VA = "0x4EF57C0", Slot = "13")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60025BA")]
	[Address(RVA = "0x4EF5800", Offset = "0x4EF5800", VA = "0x4EF5800", Slot = "14")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x60025BB")]
	[Address(RVA = "0x4EF5840", Offset = "0x4EF5840", VA = "0x4EF5840", Slot = "15")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025BC")]
	[Address(RVA = "0x4EF5880", Offset = "0x4EF5880", VA = "0x4EF5880", Slot = "16")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x60025BD")]
	[Address(RVA = "0x4EF58C0", Offset = "0x4EF58C0", VA = "0x4EF58C0", Slot = "17")]
	public virtual Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x60025BE")]
	[Address(RVA = "0x4EF5900", Offset = "0x4EF5900", VA = "0x4EF5900")]
	internal Stream GetManifestResourceStream(Type type, string name, bool skipSecurityCheck, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x60025BF")]
	[Address(RVA = "0x4EF5AA0", Offset = "0x4EF5AA0", VA = "0x4EF5AA0")]
	internal Stream GetManifestResourceStream(string name, ref System.Threading.StackCrawlMark stackMark, bool skipSecurityCheck)
	{
		return null;
	}

	[Token(Token = "0x60025C0")]
	[Address(RVA = "0x4EF5AB0", Offset = "0x4EF5AB0", VA = "0x4EF5AB0")]
	internal string GetSimpleName()
	{
		return null;
	}

	[Token(Token = "0x60025C1")]
	[Address(RVA = "0x4EF5AE0", Offset = "0x4EF5AE0", VA = "0x4EF5AE0")]
	internal byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x60025C2")]
	[Address(RVA = "0x4EF5B10", Offset = "0x4EF5B10", VA = "0x4EF5B10")]
	internal Version GetVersion()
	{
		return null;
	}

	[Token(Token = "0x60025C3")]
	[Address(RVA = "0x4EF5B40", Offset = "0x4EF5B40", VA = "0x4EF5B40")]
	private AssemblyNameFlags GetFlags()
	{
		return default(AssemblyNameFlags);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025C4")]
	[Address(RVA = "0x4EF5B70", Offset = "0x4EF5B70", VA = "0x4EF5B70", Slot = "18")]
	internal virtual extern Type[] GetTypes(bool exportedOnly);

	[Token(Token = "0x60025C5")]
	[Address(RVA = "0x4EF5B80", Offset = "0x4EF5B80", VA = "0x4EF5B80", Slot = "19")]
	public virtual Type[] GetTypes()
	{
		return null;
	}

	[Token(Token = "0x60025C6")]
	[Address(RVA = "0x4EF5BA0", Offset = "0x4EF5BA0", VA = "0x4EF5BA0", Slot = "20")]
	public virtual Type GetType(string name, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x60025C7")]
	[Address(RVA = "0x4EF5BC0", Offset = "0x4EF5BC0", VA = "0x4EF5BC0", Slot = "21")]
	public virtual Type GetType(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025C8")]
	[Address(RVA = "0x4EF5BE0", Offset = "0x4EF5BE0", VA = "0x4EF5BE0")]
	internal extern Type InternalGetType(Module module, string name, bool throwOnError, bool ignoreCase);

	[Token(Token = "0x60025C9")]
	[Address(RVA = "0x4EF5BF0", Offset = "0x4EF5BF0", VA = "0x4EF5BF0", Slot = "22")]
	public virtual AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x60025CA")]
	[Address(RVA = "0x4EF5C30", Offset = "0x4EF5C30", VA = "0x4EF5C30", Slot = "23")]
	public virtual AssemblyName GetName()
	{
		return null;
	}

	[Token(Token = "0x60025CB")]
	[Address(RVA = "0x4EF5C50", Offset = "0x4EF5C50", VA = "0x4EF5C50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60025CC")]
	[Address(RVA = "0x4EF5C60", Offset = "0x4EF5C60", VA = "0x4EF5C60")]
	public static Assembly GetAssembly(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025CD")]
	[Address(RVA = "0x4EF5D00", Offset = "0x4EF5D00", VA = "0x4EF5D00")]
	public static extern Assembly GetEntryAssembly();

	[Token(Token = "0x60025CE")]
	[Address(RVA = "0x4EF5D10", Offset = "0x4EF5D10", VA = "0x4EF5D10")]
	internal System.Reflection.RuntimeAssembly InternalGetSatelliteAssembly(string name, CultureInfo culture, Version version, bool throwOnFileNotFound, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025CF")]
	[Address(RVA = "0x4EF6270", Offset = "0x4EF6270", VA = "0x4EF6270")]
	private static extern Assembly LoadFrom(string assemblyFile, bool refOnly, ref System.Threading.StackCrawlMark stackMark);

	[Token(Token = "0x60025D0")]
	[Address(RVA = "0x4EF6280", Offset = "0x4EF6280", VA = "0x4EF6280")]
	public static Assembly Load(string assemblyString)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60025D1")]
	[Address(RVA = "0x4EF62B0", Offset = "0x4EF62B0", VA = "0x4EF62B0")]
	public static Assembly ReflectionOnlyLoad(string assemblyString)
	{
		return null;
	}

	[Token(Token = "0x60025D2")]
	[Address(RVA = "0x4EF6300", Offset = "0x4EF6300", VA = "0x4EF6300")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025D3")]
	[Address(RVA = "0x4EF63A0", Offset = "0x4EF63A0", VA = "0x4EF63A0")]
	private static extern Assembly load_with_partial_name(string name, Evidence e);

	[Token(Token = "0x60025D4")]
	[Address(RVA = "0x4EF6350", Offset = "0x4EF6350", VA = "0x4EF6350")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence)
	{
		return null;
	}

	[Token(Token = "0x60025D5")]
	[Address(RVA = "0x4EF63B0", Offset = "0x4EF63B0", VA = "0x4EF63B0")]
	internal static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence, bool oldBehavior)
	{
		return null;
	}

	[Token(Token = "0x60025D6")]
	[Address(RVA = "0x4EF6420", Offset = "0x4EF6420", VA = "0x4EF6420", Slot = "24")]
	public Module[] GetModules()
	{
		return null;
	}

	[Token(Token = "0x60025D7")]
	[Address(RVA = "0x4EF6440", Offset = "0x4EF6440", VA = "0x4EF6440", Slot = "25")]
	internal virtual Module[] GetModulesInternal()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025D8")]
	[Address(RVA = "0x4EF6480", Offset = "0x4EF6480", VA = "0x4EF6480")]
	public static extern Assembly GetExecutingAssembly();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60025D9")]
	[Address(RVA = "0x4EF64B0", Offset = "0x4EF64B0", VA = "0x4EF64B0")]
	public static extern Assembly GetCallingAssembly();

	[Token(Token = "0x60025DA")]
	[Address(RVA = "0x4EF64C0", Offset = "0x4EF64C0", VA = "0x4EF64C0", Slot = "26")]
	public virtual string[] GetManifestResourceNames()
	{
		return null;
	}

	[Token(Token = "0x60025DB")]
	[Address(RVA = "0x4EF6500", Offset = "0x4EF6500", VA = "0x4EF6500", Slot = "27")]
	public virtual ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[Token(Token = "0x60025DD")]
	[Address(RVA = "0x4EF6580", Offset = "0x4EF6580", VA = "0x4EF6580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60025DE")]
	[Address(RVA = "0x4EF6590", Offset = "0x4EF6590", VA = "0x4EF6590", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60025DF")]
	[Address(RVA = "0x4EF65A0", Offset = "0x4EF65A0", VA = "0x4EF65A0")]
	private static Exception CreateNIE()
	{
		return null;
	}

	[Token(Token = "0x60025E1")]
	[Address(RVA = "0x4EF6610", Offset = "0x4EF6610", VA = "0x4EF6610", Slot = "29")]
	public virtual Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x60025E2")]
	[Address(RVA = "0x4EF6630", Offset = "0x4EF6630", VA = "0x4EF6630", Slot = "30")]
	public virtual Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x60025E3")]
	[Address(RVA = "0x4EF6650", Offset = "0x4EF6650", VA = "0x4EF6650", Slot = "31")]
	public virtual Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x60025E5")]
	[Address(RVA = "0x4EF6680", Offset = "0x4EF6680", VA = "0x4EF6680")]
	public static bool operator ==(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025E6")]
	[Address(RVA = "0x4EF6230", Offset = "0x4EF6230", VA = "0x4EF6230")]
	public static bool operator !=(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x60025E7")]
	[Address(RVA = "0x4EF66C0", Offset = "0x4EF66C0", VA = "0x4EF66C0")]
	public Assembly()
	{
	}
}
