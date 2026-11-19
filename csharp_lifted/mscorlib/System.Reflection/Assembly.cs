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
[Token(Token = "0x2000512")]
[ComDefaultInterface(typeof(_Assembly))]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
public class Assembly : ICustomAttributeProvider, ISerializable, _Assembly
{
	[Token(Token = "0x2000513")]
	internal class ResolveEventHolder
	{
		[Token(Token = "0x6002639")]
		[Address(RVA = "0x53E2DF0", Offset = "0x53E1DF0", VA = "0x53E2DF0")]
		public ResolveEventHolder()
		{
		}
	}

	[Token(Token = "0x1700053C")]
	public virtual string CodeBase
	{
		[Token(Token = "0x6002605")]
		[Address(RVA = "0x53E1DD0", Offset = "0x53E0DD0", VA = "0x53E1DD0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053D")]
	public virtual string EscapedCodeBase
	{
		[Token(Token = "0x6002606")]
		[Address(RVA = "0x53E1E10", Offset = "0x53E0E10", VA = "0x53E1E10", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053E")]
	public virtual string FullName
	{
		[Token(Token = "0x6002607")]
		[Address(RVA = "0x53E1E50", Offset = "0x53E0E50", VA = "0x53E1E50", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700053F")]
	internal virtual IntPtr MonoAssembly
	{
		[Token(Token = "0x6002608")]
		[Address(RVA = "0x53E1E90", Offset = "0x53E0E90", VA = "0x53E1E90", Slot = "11")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000540")]
	public virtual string Location
	{
		[Token(Token = "0x6002609")]
		[Address(RVA = "0x53E1ED0", Offset = "0x53E0ED0", VA = "0x53E1ED0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000541")]
	[ComVisible(false)]
	public virtual bool ReflectionOnly
	{
		[Token(Token = "0x600262D")]
		[Address(RVA = "0x53E2C60", Offset = "0x53E1C60", VA = "0x53E2C60", Slot = "28")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000542")]
	[System.MonoTODO]
	public bool IsFullyTrusted
	{
		[Token(Token = "0x6002631")]
		[Address(RVA = "0x53E2D20", Offset = "0x53E1D20", VA = "0x53E2D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000543")]
	public virtual bool IsDynamic
	{
		[Token(Token = "0x6002635")]
		[Address(RVA = "0x53E2D90", Offset = "0x53E1D90", VA = "0x53E2D90", Slot = "32")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600260A")]
	[Address(RVA = "0x53E1F10", Offset = "0x53E0F10", VA = "0x53E1F10", Slot = "13")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600260B")]
	[Address(RVA = "0x53E1F50", Offset = "0x53E0F50", VA = "0x53E1F50", Slot = "14")]
	public virtual bool IsDefined(Type attributeType, bool inherit)
	{
		return default(bool);
	}

	[Token(Token = "0x600260C")]
	[Address(RVA = "0x53E1F90", Offset = "0x53E0F90", VA = "0x53E1F90", Slot = "15")]
	public virtual object[] GetCustomAttributes(bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600260D")]
	[Address(RVA = "0x53E1FD0", Offset = "0x53E0FD0", VA = "0x53E1FD0", Slot = "16")]
	public virtual object[] GetCustomAttributes(Type attributeType, bool inherit)
	{
		return null;
	}

	[Token(Token = "0x600260E")]
	[Address(RVA = "0x53E2010", Offset = "0x53E1010", VA = "0x53E2010", Slot = "17")]
	public virtual Stream GetManifestResourceStream(string name)
	{
		return null;
	}

	[Token(Token = "0x600260F")]
	[Address(RVA = "0x53E2050", Offset = "0x53E1050", VA = "0x53E2050")]
	internal Stream GetManifestResourceStream(Type type, string name, bool skipSecurityCheck, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[Token(Token = "0x6002610")]
	[Address(RVA = "0x53E21F0", Offset = "0x53E11F0", VA = "0x53E21F0")]
	internal Stream GetManifestResourceStream(string name, ref System.Threading.StackCrawlMark stackMark, bool skipSecurityCheck)
	{
		return null;
	}

	[Token(Token = "0x6002611")]
	[Address(RVA = "0x53E2200", Offset = "0x53E1200", VA = "0x53E2200")]
	internal string GetSimpleName()
	{
		return null;
	}

	[Token(Token = "0x6002612")]
	[Address(RVA = "0x53E2230", Offset = "0x53E1230", VA = "0x53E2230")]
	internal byte[] GetPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6002613")]
	[Address(RVA = "0x53E2260", Offset = "0x53E1260", VA = "0x53E2260")]
	internal Version GetVersion()
	{
		return null;
	}

	[Token(Token = "0x6002614")]
	[Address(RVA = "0x53E2290", Offset = "0x53E1290", VA = "0x53E2290")]
	private AssemblyNameFlags GetFlags()
	{
		return default(AssemblyNameFlags);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002615")]
	[Address(RVA = "0x53E22C0", Offset = "0x53E12C0", VA = "0x53E22C0", Slot = "18")]
	internal virtual extern Type[] GetTypes(bool exportedOnly);

	[Token(Token = "0x6002616")]
	[Address(RVA = "0x53E22D0", Offset = "0x53E12D0", VA = "0x53E22D0", Slot = "19")]
	public virtual Type[] GetTypes()
	{
		return null;
	}

	[Token(Token = "0x6002617")]
	[Address(RVA = "0x53E22F0", Offset = "0x53E12F0", VA = "0x53E22F0", Slot = "20")]
	public virtual Type GetType(string name, bool throwOnError)
	{
		return null;
	}

	[Token(Token = "0x6002618")]
	[Address(RVA = "0x53E2310", Offset = "0x53E1310", VA = "0x53E2310", Slot = "21")]
	public virtual Type GetType(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002619")]
	[Address(RVA = "0x53E2330", Offset = "0x53E1330", VA = "0x53E2330")]
	internal extern Type InternalGetType(Module module, string name, bool throwOnError, bool ignoreCase);

	[Token(Token = "0x600261A")]
	[Address(RVA = "0x53E2340", Offset = "0x53E1340", VA = "0x53E2340", Slot = "22")]
	public virtual AssemblyName GetName(bool copiedName)
	{
		return null;
	}

	[Token(Token = "0x600261B")]
	[Address(RVA = "0x53E2380", Offset = "0x53E1380", VA = "0x53E2380", Slot = "23")]
	public virtual AssemblyName GetName()
	{
		return null;
	}

	[Token(Token = "0x600261C")]
	[Address(RVA = "0x53E23A0", Offset = "0x53E13A0", VA = "0x53E23A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600261D")]
	[Address(RVA = "0x53E23B0", Offset = "0x53E13B0", VA = "0x53E23B0")]
	public static Assembly GetAssembly(Type type)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600261E")]
	[Address(RVA = "0x53E2450", Offset = "0x53E1450", VA = "0x53E2450")]
	public static extern Assembly GetEntryAssembly();

	[Token(Token = "0x600261F")]
	[Address(RVA = "0x53E2460", Offset = "0x53E1460", VA = "0x53E2460")]
	internal System.Reflection.RuntimeAssembly InternalGetSatelliteAssembly(string name, CultureInfo culture, Version version, bool throwOnFileNotFound, ref System.Threading.StackCrawlMark stackMark)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002620")]
	[Address(RVA = "0x53E2990", Offset = "0x53E1990", VA = "0x53E2990")]
	private static extern Assembly LoadFrom(string assemblyFile, bool refOnly, ref System.Threading.StackCrawlMark stackMark);

	[Token(Token = "0x6002621")]
	[Address(RVA = "0x53E29A0", Offset = "0x53E19A0", VA = "0x53E29A0")]
	public static Assembly Load(string assemblyString)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002622")]
	[Address(RVA = "0x53E29D0", Offset = "0x53E19D0", VA = "0x53E29D0")]
	public static Assembly ReflectionOnlyLoad(string assemblyString)
	{
		return null;
	}

	[Token(Token = "0x6002623")]
	[Address(RVA = "0x53E2A20", Offset = "0x53E1A20", VA = "0x53E2A20")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002624")]
	[Address(RVA = "0x53E2AC0", Offset = "0x53E1AC0", VA = "0x53E2AC0")]
	private static extern Assembly load_with_partial_name(string name, Evidence e);

	[Token(Token = "0x6002625")]
	[Address(RVA = "0x53E2A70", Offset = "0x53E1A70", VA = "0x53E2A70")]
	[Obsolete("This method has been deprecated. Please use Assembly.Load() instead. http://go.microsoft.com/fwlink/?linkid=14202")]
	public static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence)
	{
		return null;
	}

	[Token(Token = "0x6002626")]
	[Address(RVA = "0x53E2AD0", Offset = "0x53E1AD0", VA = "0x53E2AD0")]
	internal static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence, bool oldBehavior)
	{
		return null;
	}

	[Token(Token = "0x6002627")]
	[Address(RVA = "0x53E2B40", Offset = "0x53E1B40", VA = "0x53E2B40", Slot = "24")]
	public Module[] GetModules()
	{
		return null;
	}

	[Token(Token = "0x6002628")]
	[Address(RVA = "0x53E2B60", Offset = "0x53E1B60", VA = "0x53E2B60", Slot = "25")]
	internal virtual Module[] GetModulesInternal()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002629")]
	[Address(RVA = "0x53E2BA0", Offset = "0x53E1BA0", VA = "0x53E2BA0")]
	public static extern Assembly GetExecutingAssembly();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600262A")]
	[Address(RVA = "0x53E2BD0", Offset = "0x53E1BD0", VA = "0x53E2BD0")]
	public static extern Assembly GetCallingAssembly();

	[Token(Token = "0x600262B")]
	[Address(RVA = "0x53E2BE0", Offset = "0x53E1BE0", VA = "0x53E2BE0", Slot = "26")]
	public virtual string[] GetManifestResourceNames()
	{
		return null;
	}

	[Token(Token = "0x600262C")]
	[Address(RVA = "0x53E2C20", Offset = "0x53E1C20", VA = "0x53E2C20", Slot = "27")]
	public virtual ManifestResourceInfo GetManifestResourceInfo(string resourceName)
	{
		return null;
	}

	[Token(Token = "0x600262E")]
	[Address(RVA = "0x53E2CA0", Offset = "0x53E1CA0", VA = "0x53E2CA0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600262F")]
	[Address(RVA = "0x53E2CB0", Offset = "0x53E1CB0", VA = "0x53E2CB0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002630")]
	[Address(RVA = "0x53E2CC0", Offset = "0x53E1CC0", VA = "0x53E2CC0")]
	private static Exception CreateNIE()
	{
		return null;
	}

	[Token(Token = "0x6002632")]
	[Address(RVA = "0x53E2D30", Offset = "0x53E1D30", VA = "0x53E2D30", Slot = "29")]
	public virtual Type GetType(string name, bool throwOnError, bool ignoreCase)
	{
		return null;
	}

	[Token(Token = "0x6002633")]
	[Address(RVA = "0x53E2D50", Offset = "0x53E1D50", VA = "0x53E2D50", Slot = "30")]
	public virtual Module GetModule(string name)
	{
		return null;
	}

	[Token(Token = "0x6002634")]
	[Address(RVA = "0x53E2D70", Offset = "0x53E1D70", VA = "0x53E2D70", Slot = "31")]
	public virtual Module[] GetModules(bool getResourceModules)
	{
		return null;
	}

	[Token(Token = "0x6002636")]
	[Address(RVA = "0x53E2DA0", Offset = "0x53E1DA0", VA = "0x53E2DA0")]
	public static bool operator ==(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002637")]
	[Address(RVA = "0x53E2950", Offset = "0x53E1950", VA = "0x53E2950")]
	public static bool operator !=(Assembly left, Assembly right)
	{
		return default(bool);
	}

	[Token(Token = "0x6002638")]
	[Address(RVA = "0x53E2DE0", Offset = "0x53E1DE0", VA = "0x53E2DE0")]
	public Assembly()
	{
	}
}
