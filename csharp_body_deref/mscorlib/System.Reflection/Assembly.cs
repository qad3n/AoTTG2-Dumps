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
[Token(Token = "0x2000539")]
[ComVisible(true)]
[ComDefaultInterface(typeof(_Assembly))]
[ClassInterface(ClassInterfaceType.None)]
public class Assembly : ICustomAttributeProvider, ISerializable, _Assembly
{
	[Token(Token = "0x200053A")]
	internal class ResolveEventHolder
	{
		[Token(Token = "0x600266B")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ResolveEventHolder()
		{
		}
	}

	[Token(Token = "0x1700053D")]
	public virtual string CodeBase
	{
		[Token(Token = "0x6002637")]
		[Address(RVA = "0x1A41340", Offset = "0x1A3F940", VA = "0x181A41340", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053E")]
	public virtual string EscapedCodeBase
	{
		[Token(Token = "0x6002638")]
		[Address(RVA = "0x1A41380", Offset = "0x1A3F980", VA = "0x181A41380", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053F")]
	public virtual string FullName
	{
		[Token(Token = "0x6002639")]
		[Address(RVA = "0x1A413C0", Offset = "0x1A3F9C0", VA = "0x181A413C0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000540")]
	internal virtual IntPtr MonoAssembly
	{
		[Token(Token = "0x600263A")]
		[Address(RVA = "0x1A41440", Offset = "0x1A3FA40", VA = "0x181A41440", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000541")]
	public virtual string Location
	{
		[Token(Token = "0x600263B")]
		[Address(RVA = "0x1A41400", Offset = "0x1A3FA00", VA = "0x181A41400", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000542")]
	[ComVisible(false)]
	public virtual bool ReflectionOnly
	{
		[Token(Token = "0x600265F")]
		[Address(RVA = "0x1A41480", Offset = "0x1A3FA80", VA = "0x181A41480", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000543")]
	[System.MonoTODO]
	public bool IsFullyTrusted
	{
		[Token(Token = "0x6002663")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000544")]
	public virtual bool IsDynamic
	{
		[Token(Token = "0x6002667")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600263C")]
	[Address(RVA = "0x1A40BC0", Offset = "0x1A3F1C0", VA = "0x181A40BC0", Slot = "13")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600263D")]
	[Address(RVA = "0x1A41110", Offset = "0x1A3F710", VA = "0x181A41110", Slot = "14")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600263E")]
	[Address(RVA = "0x1A40680", Offset = "0x1A3EC80", VA = "0x181A40680", Slot = "15")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600263F")]
	[Address(RVA = "0x1A40640", Offset = "0x1A3EC40", VA = "0x181A40640", Slot = "16")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x6002640")]
	[Address(RVA = "0x1A407A0", Offset = "0x1A3EDA0", VA = "0x181A407A0", Slot = "17")]
	public virtual Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x6002641")]
	[Address(RVA = "0x1A40900", Offset = "0x1A3EF00", VA = "0x181A40900")]
	internal Stream GetManifestResourceStream(Type type, string name, bool skipSecurityCheck, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002642")]
	[Address(RVA = "0x1A407E0", Offset = "0x1A3EDE0", VA = "0x181A407E0")]
	internal Stream GetManifestResourceStream(string name, ref System.Threading.StackCrawlMark stackMark, bool skipSecurityCheck)
	{
		return null;
	}

	[Token(Token = "0x6002643")]
	[Address(RVA = "0x1A40C30", Offset = "0x1A3F230", VA = "0x181A40C30")]
	internal string GetSimpleName()
	{
		return null;
	}

	[Token(Token = "0x6002644")]
	[Address(RVA = "0x1A40C00", Offset = "0x1A3F200", VA = "0x181A40C00")]
	internal byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6002645")]
	[Address(RVA = "0x1A40D20", Offset = "0x1A3F320", VA = "0x181A40D20")]
	internal Version GetVersion()
	{
		return null;
	}

	[Token(Token = "0x6002646")]
	[Address(RVA = "0x1A406F0", Offset = "0x1A3ECF0", VA = "0x181A406F0")]
	private AssemblyNameFlags GetFlags()
	{
		return default(AssemblyNameFlags);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002647")]
	[Address(RVA = "0x1A40CF0", Offset = "0x1A3F2F0", VA = "0x181A40CF0", Slot = "18")]
	internal virtual extern Type[] GetTypes(bool exportedOnly);

	[Token(Token = "0x6002648")]
	[Address(RVA = "0x1A40D00", Offset = "0x1A3F300", VA = "0x181A40D00", Slot = "19")]
	public virtual Type[] GetTypes()
	{
		return null;
	}

	[Token(Token = "0x6002649")]
	[Address(RVA = "0x1A40C90", Offset = "0x1A3F290", VA = "0x181A40C90", Slot = "20")]
	public virtual Type GetType(string name, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x600264A")]
	[Address(RVA = "0x1A40C60", Offset = "0x1A3F260", VA = "0x181A40C60", Slot = "21")]
	public virtual Type GetType(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600264B")]
	[Address(RVA = "0x1A41100", Offset = "0x1A3F700", VA = "0x181A41100")]
	internal extern Type InternalGetType(Module module, string name, bool throwOnError, bool ignoreCase);

	[Token(Token = "0x600264C")]
	[Address(RVA = "0x1A40B60", Offset = "0x1A3F160", VA = "0x181A40B60", Slot = "22")]
	public virtual AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x600264D")]
	[Address(RVA = "0x1A40BA0", Offset = "0x1A3F1A0", VA = "0x181A40BA0", Slot = "23")]
	public virtual AssemblyName GetName()
	{
		return null;
	}

	[Token(Token = "0x600264E")]
	[Address(RVA = "0x1A41330", Offset = "0x1A3F930", VA = "0x181A41330", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600264F")]
	[Address(RVA = "0x1A40590", Offset = "0x1A3EB90", VA = "0x181A40590")]
	public static Assembly GetAssembly(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002650")]
	[Address(RVA = "0x19E8C50", Offset = "0x19E7250", VA = "0x1819E8C50")]
	public static extern Assembly GetEntryAssembly();

	[Token(Token = "0x6002651")]
	[Address(RVA = "0x1A40D50", Offset = "0x1A3F350", VA = "0x181A40D50")]
	internal System.Reflection.RuntimeAssembly InternalGetSatelliteAssembly(string name, CultureInfo culture, Version version, bool throwOnFileNotFound, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002652")]
	[Address(RVA = "0x1A41150", Offset = "0x1A3F750", VA = "0x181A41150")]
	private static extern Assembly LoadFrom(string assemblyFile, bool refOnly, ref System.Threading.StackCrawlMark stackMark);

	[Token(Token = "0x6002653")]
	[Address(RVA = "0x1A412B0", Offset = "0x1A3F8B0", VA = "0x181A412B0")]
	public static Assembly Load(string assemblyString)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002654")]
	[Address(RVA = "0x1A412E0", Offset = "0x1A3F8E0", VA = "0x181A412E0")]
	public static Assembly ReflectionOnlyLoad(string assemblyString)
	{
		return null;
	}

	[Token(Token = "0x6002655")]
	[Address(RVA = "0x1A41160", Offset = "0x1A3F760", VA = "0x181A41160")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002656")]
	[Address(RVA = "0x1A414C0", Offset = "0x1A3FAC0", VA = "0x181A414C0")]
	private static extern Assembly load_with_partial_name(string name, Evidence e);

	[Token(Token = "0x6002657")]
	[Address(RVA = "0x1A41250", Offset = "0x1A3F850", VA = "0x181A41250")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence)
	{
		return null;
	}

	[Token(Token = "0x6002658")]
	[Address(RVA = "0x1A411C0", Offset = "0x1A3F7C0", VA = "0x181A411C0")]
	internal static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence, bool oldBehavior)
	{
		return null;
	}

	[Token(Token = "0x6002659")]
	[Address(RVA = "0x1A40B40", Offset = "0x1A3F140", VA = "0x181A40B40", Slot = "24")]
	public Module[] GetModules()
	{
		return null;
	}

	[Token(Token = "0x600265A")]
	[Address(RVA = "0x1A40AD0", Offset = "0x1A3F0D0", VA = "0x181A40AD0", Slot = "25")]
	internal virtual Module[] GetModulesInternal()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600265B")]
	[Address(RVA = "0x1A406C0", Offset = "0x1A3ECC0", VA = "0x181A406C0")]
	public static extern Assembly GetExecutingAssembly();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600265C")]
	[Address(RVA = "0x1A40630", Offset = "0x1A3EC30", VA = "0x181A40630")]
	public static extern Assembly GetCallingAssembly();

	[Token(Token = "0x600265D")]
	[Address(RVA = "0x1A40760", Offset = "0x1A3ED60", VA = "0x181A40760", Slot = "26")]
	public virtual string[] GetManifestResourceNames()
	{
		return null;
	}

	[Token(Token = "0x600265E")]
	[Address(RVA = "0x1A40720", Offset = "0x1A3ED20", VA = "0x181A40720", Slot = "27")]
	public virtual ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[Token(Token = "0x6002660")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002661")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002662")]
	[Address(RVA = "0x1A40520", Offset = "0x1A3EB20", VA = "0x181A40520")]
	private static Exception CreateNIE()
	{
		return null;
	}

	[Token(Token = "0x6002664")]
	[Address(RVA = "0x1A40CC0", Offset = "0x1A3F2C0", VA = "0x181A40CC0", Slot = "29")]
	public virtual Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002665")]
	[Address(RVA = "0x1A40AA0", Offset = "0x1A3F0A0", VA = "0x181A40AA0", Slot = "30")]
	public virtual Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x6002666")]
	[Address(RVA = "0x1A40B10", Offset = "0x1A3F110", VA = "0x181A40B10", Slot = "31")]
	public virtual Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x6002668")]
	[Address(RVA = "0x1A414D0", Offset = "0x1A3FAD0", VA = "0x181A414D0")]
	public static bool operator ==(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002669")]
	[Address(RVA = "0x1A41520", Offset = "0x1A3FB20", VA = "0x181A41520")]
	public static bool operator !=(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x600266A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public Assembly()
	{
	}
}
